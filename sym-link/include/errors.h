#pragma once

#include <stdexcept>
#include <string>

namespace SymLink
{
    class Error : public std::exception
    {
    private:

    public:
        explicit Error(const char* message);
        explicit Error(std::string message);
    };
}