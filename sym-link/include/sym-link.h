#pragma once

#ifdef SYM_LINK_EXPORTS
#define SYM_LINK_API __declspec(dllexport)   
#else  
#define SYM_LINK_API __declspec(dllimport)   
#endif 

#include <string>

namespace SymLink
{
    class SymLink
    {
    private:
        std::string _path;
    public:
        SYM_LINK_API SymLink(std::string path);
        SYM_LINK_API void foobar();
    };
}