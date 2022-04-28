//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-
#include "NotFoundException.h"

NotFoundException::NotFoundException(const std::string& message) : std::exception("Target not Found")
{
}
