// sym-link.cpp : Defines the exported functions for the DLL application.
//


#include "stdafx.h"
#include "sym-link.h"
#include "errors.h"
#include <iostream>

namespace SymLink
{
    SymLink::SymLink(std::wstring path)
    {
        _path = path;
    }

    void SymLink::foobar()
    {
        std::wcout << _path << std::endl;
    }

    void SymLink::setPath(std::wstring path)
    {
        _path = path;
    }

    void SymLink::setTarget(std::wstring target)
    {
        _targetPath = target;

        auto result = GetFileAttributes(_targetPath.c_str());

        switch (result)
        {
        case FILE_ATTRIBUTE_DIRECTORY:
            _isDirectory = true;
            _flag = SYMBOLIC_LINK_FLAG_DIRECTORY;
            break;
        case INVALID_FILE_ATTRIBUTES:
            throw Error("Invalid Path");
            break;
        default:
            throw Error("Invalid path");
            break;
        }
    }

    void SymLink::_createSymLink()
    {
        CreateSymbolicLink(_path.c_str(), _targetPath.c_str(), _flag);
    }

    void SymLink::_moveDirectory()
    {
        // TODO: callback function
        MoveFileWithProgressW(_path.c_str(), _targetPath.c_str(), NULL, NULL, MOVEFILE_COPY_ALLOWED | MOVEFILE_FAIL_IF_NOT_TRACKABLE);
    }
}