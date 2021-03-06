#include "stdafx.h"

#include <msclr\marshal_cppstd.h>
#include <iostream>
#include "Interop.h"
#include "sym-link.h"

namespace Interop {

    String^ SymLinker::foo()
    {
        return gcnew String("hello world!");
    }

    void SymLinker::bar()
    {
        auto x = SymLink::SymLink(L"superbar");
        x.foobar();
    }

    void SymLinker::foobar(String^ string)
    {
        msclr::interop::marshal_context context;

        std::wstring response = context.marshal_as<std::wstring>(string);

        std::wcout << response << std::endl;
    }
}