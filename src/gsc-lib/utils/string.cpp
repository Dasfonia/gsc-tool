#include "stdinc.hpp"

namespace utils::string
{
	auto is_hex_number(const std::string& s) -> bool
	{
		return !s.empty() && std::all_of(s.begin(), s.end(), ::isxdigit);
	}

	auto to_lower(std::string input) -> std::string
	{
		std::string output(input.begin(), input.end());

		for (std::size_t i = 0; i < output.size(); i++)
		{
			output[i] = tolower(input[i]);
		}

		return output;
	}

	auto split(std::string& str, char delimiter) -> std::vector<std::string>
	{
		std::vector<std::string> internal;
		std::stringstream ss(str);
		std::string tok;

		while (std::getline(ss, tok, delimiter))
		{
			internal.push_back(tok);
		}

		return internal;
	}

	auto clean_buffer_lines(std::string& buffer) -> std::vector<std::string>
	{
		std::size_t pos;

		while ((pos = buffer.find("\t")) != std::string::npos)
		{
			buffer = buffer.replace(pos, 1, "");
		}
		while ((pos = buffer.find("\r")) != std::string::npos)
		{
			buffer = buffer.replace(pos, 1, "");
		}

		return split(buffer, '\n');
	}

	auto get_string_literal(std::string str) -> std::string
	{
		return str.substr(1, str.size() - 2);
	}
}
