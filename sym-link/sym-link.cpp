// sym-link.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "sym-link.h"
#include <iostream>

namespace SymLink
{
    SymLink::SymLink(std::string path)
    {
        _path = path;
    }

    void SymLink::foobar()
    {
        std::cout << _path << std::endl;
    }
}