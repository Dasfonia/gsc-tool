// Copyright 2020 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#ifndef _GSC_SH1_COMPILER_HPP_
#define _GSC_SH1_COMPILER_HPP_

namespace SH1
{

class compiler : public gsc::compiler
{
public:
	auto output() -> std::vector<gsc::function_ptr>;
	void compile(std::string& data);
};

} // namespace SH1

#endif // _GSC_SH1_COMPILER_HPP_
