#pragma once
//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3

#include<stdexcept>
#include<string>
class NotFoundException : public std::exception
{
public:
	NotFoundException(const std::string& message = "");
};