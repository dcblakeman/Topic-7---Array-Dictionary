//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3
#include "PrecondViolatedExcept.h"

PrecondViolatedExcept::PrecondViolatedExcept(const std::string& message) : std::logic_error("Precondition Violated Exception: " + message)
{
}