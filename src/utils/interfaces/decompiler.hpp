// Copyright 2021 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#ifndef _GSC_DECOMPILER_HPP_
#define _GSC_DECOMPILER_HPP_

namespace gsc
{
    
class decompiler
{
public:
    virtual auto output() -> std::vector<std::uint8_t> = 0;
    virtual void decompile(std::vector<gsc::function_ptr>& functions) = 0;
};

} // namespace gsc

#endif // _GSC_DECOMPILER_HPP_
