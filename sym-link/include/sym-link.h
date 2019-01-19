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
        std::wstring _path;
        std::wstring _targetPath;

        bool _isDirectory = true;
        DWORD _flag = 0;
        void _createSymLink();
        void _moveDirectory();
    public:
        SYM_LINK_API SymLink() = default;
        SYM_LINK_API SymLink(std::wstring path);
        SYM_LINK_API void foobar();
        SYM_LINK_API void setPath(std::wstring path);
        SYM_LINK_API void setTarget(std::wstring target);

    };
}