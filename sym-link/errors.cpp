#include "errors.h"

namespace SymLink
{
    Error::Error(const char* message) : std::exception(message) {};

    Error::Error(std::string message) : std::exception(message.c_str())
    {

    }
}