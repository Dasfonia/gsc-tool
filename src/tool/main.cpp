// Copyright 2020 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdinc.hpp"

auto overwrite_prompt(const std::string& file) -> bool
{
    auto overwrite = true;

    if (std::filesystem::exists(file))
    {
        do
        {
            printf("File \"%s\" already exists, overwrite? [Y/n]: ", file.data());
            auto result = std::getchar();

            if (result == '\n' || result == 'Y' || result == 'y')
            {
                break;
            }
            else if (result == 'N' || result == 'n')
            {
                overwrite = false;
                break;
            }
        } while (true);
    }

    return overwrite;
}

void assemble_file(gsc::assembler& assembler, std::string file)
{
    const auto ext = std::string(".gscasm");
    const auto extpos = file.find(ext);
    
    if (extpos != std::string::npos)
    {
        file.replace(extpos, ext.length(), "");
    }

    auto data = utils::file::read(file + ext);

    assembler.assemble(data);

    if (overwrite_prompt(file + ".gscbin"))
    {
        gsc::asset script;

        auto uncompressed = assembler.output_stack();
        auto compressed = utils::zlib::compress(uncompressed);

        script.name = file; // add name conversor to ids
        script.bytecode = assembler.output_script();
        script.buffer = std::move(compressed);
        script.len = uncompressed.size();
        script.compressedLen = script.buffer.size();
        script.bytecodeLen = script.bytecode.size();

        auto output = script.serialize();
        utils::file::save(file + ".gscbin", output);
    }
}

void disassemble_file(gsc::disassembler& disassembler, std::string file)
{
    const auto ext = std::string(".gscbin");
    const auto extpos = file.find(ext);
    
    if (extpos != std::string::npos)
    {
        file.replace(extpos, ext.length(), "");
    }

    auto data = utils::file::read(file + ".gscbin");

    gsc::asset script;

    script.deserialize(data);

    auto stack = utils::zlib::decompress(script.buffer, script.len);

    disassembler.disassemble(script.bytecode, stack);
    
    utils::file::save(file + ".gscasm", disassembler.output_data());
}

void compile_file(gsc::assembler& assembler, gsc::compiler& compiler, std::string file)
{
    const auto ext = std::string(".gsc");
    const auto extpos = file.find(ext);
    
    if (extpos != std::string::npos)
    {
        file.replace(extpos, ext.length(), "");
    }

    auto data = utils::file::read(file + ext);

    compiler.compile(data);

    auto assembly = compiler.output();

    assembler.assemble(assembly);

    if (overwrite_prompt(file + ".gscbin"))
    {
        gsc::asset script;

        auto uncompressed = assembler.output_stack();
        auto compressed = utils::zlib::compress(uncompressed);

        script.name = file; // add name conversor to ids
        script.bytecode = assembler.output_script();
        script.buffer = std::move(compressed);
        script.len = uncompressed.size();
        script.compressedLen = script.buffer.size();
        script.bytecodeLen = script.bytecode.size();

        auto output = script.serialize();
        utils::file::save(file + ".gscbin", output);
    }
}

void decompile_file(gsc::disassembler& disassembler, gsc::decompiler& decompiler, std::string file)
{
    const auto ext = std::string(".gscbin");
    const auto extpos = file.find(ext);
    
    if (extpos != std::string::npos)
    {
        file.replace(extpos, ext.length(), "");
    }

    auto data = utils::file::read(file + ".gscbin");

    gsc::asset script;

    script.deserialize(data);

    auto stack = utils::zlib::decompress(script.buffer, script.len);

    disassembler.disassemble(script.bytecode, stack);
    
    auto output = disassembler.output();

    decompiler.decompile(output);

    utils::file::save(file + ".gsc", decompiler.output());
}

int parse_flags(int argc, char** argv, game& game, mode& mode)
{
    if (argc != 4) return 1;

    std::string arg = utils::string::to_lower(argv[1]);

    if (arg == "-iw5")
    {
        game = game::IW5;
    }
    else if (arg == "-iw6")
    {
        game = game::IW6;
    }
    else if (arg == "-iw7")
    {
        game = game::IW7;
    }
    else if (arg == "-s1")
    {
        game = game::S1;
    }
    else if (arg == "-s2")
    {
        game = game::S2;
    }
    else if (arg == "-h1")
    {
        game = game::H1;
    }
    else if (arg == "-h2")
    {
        game = game::H2;
    }
    else
    {
        printf("Unknown game \"%s\".\n", argv[1]);
        return 1;
    }

    arg = utils::string::to_lower(argv[2]);

    if (arg == "-asm")
    {
        mode = mode::ASM;
    }
    else if (arg == "-disasm")
    {
        mode = mode::DISASM;
    }
    else if (arg == "-comp")
    {
        mode = mode::COMP;
    }
    else if (arg == "-decomp")
    {
        mode = mode::DECOMP;
    }
    else
    {
        printf("Unknown mode \"%s\".\n\n", argv[2]);
        return 1;
    }

    return 0;
}

int main(int argc, char** argv)
{
    std::string file = argv[argc - 1];
    mode mode = mode::__;
    game game = game::__;

    if (parse_flags(argc, argv, game, mode))
    {
        printf("usage: gsc-tool.exe <game> <mode> <file>\n");
        printf("	* games: -iw5, -iw6, -s1, -s2, -h1, -h2\n");
        printf("	* modes: -asm, -disasm, -comp, -decomp\n");
        return 0;
    }

    if (mode == mode::ASM)
    {
        if( game == game::IW5)
        {
            IW5::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::IW6)
        {
            IW6::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::IW7)
        {
            IW7::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::S1)
        {
            S1::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::S2)
        {
            S2::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::H1)
        {
            H1::assembler assembler;
            assemble_file(assembler, file);
        }
        else if (game == game::H2)
        {
            H2::assembler assembler;
            assemble_file(assembler, file);
        }
    }
    else if (mode == mode::DISASM)
    {
        if (game == game::IW5)
        {
            IW5::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::IW6)
        {
            IW6::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::IW7)
        {
            IW7::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::S1)
        {
            S1::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::S2)
        {
            S2::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::H1)
        {
            H1::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
        else if (game == game::H2)
        {
            H2::disassembler disassembler;
            disassemble_file(disassembler, file);
        }
    }
    else if (mode == mode::COMP)
    {
        if (game == game::IW5)
        {
            IW5::assembler assembler;
            IW5::compiler compiler;
            compile_file(assembler,compiler, file);
        }
        else if (game == game::IW6)
        {
            IW6::assembler assembler;
            IW6::compiler compiler;
            compile_file(assembler, compiler, file);
        }
        else if (game == game::IW7)
        {
            IW7::assembler assembler;
            IW7::compiler compiler;
            compile_file(assembler, compiler, file);
        }
        else if (game == game::S1)
        {
            S1::assembler assembler;
            S1::compiler compiler;
            compile_file(assembler, compiler, file);
        }
        else if (game == game::S2)
        {
            S2::assembler assembler;
            S2::compiler compiler;
            compile_file(assembler, compiler, file);
        }
        else if (game == game::H1)
        {
            H1::assembler assembler;
            H1::compiler compiler;
            compile_file(assembler, compiler, file);
        }
        else if (game == game::H2)
        {
            H2::assembler assembler;
            H2::compiler compiler;
            compile_file(assembler, compiler, file);
        }
    }
    else if (mode == mode::DECOMP)
    {
        if (game == game::IW5)
        {
            IW5::disassembler disassembler;
            IW5::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::IW6)
        {
            IW6::disassembler disassembler;
            IW6::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::IW7)
        {
            IW7::disassembler disassembler;
            IW7::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::S1)
        {
            S1::disassembler disassembler;
            S1::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::S2)
        {
            S2::disassembler disassembler;
            S2::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::H1)
        {
            H1::disassembler disassembler;
            H1::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
        else if (game == game::H2)
        {
            H2::disassembler disassembler;
            H2::decompiler decompiler;
            decompile_file(disassembler, decompiler, file);
        }
    }

    return 0;
}
