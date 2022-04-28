//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3
#include"ArrayDictionary.cpp"
#include"Entry.cpp"
#include<iostream>
#include<string>


int main()
{
	cout << "Dictionary" << endl;
	ArrayDictionary<int, string> newDictionary;
	newDictionary.add(0, "hello");
	cout << "test1";
	cout << "Entry 1: " << newDictionary.getValue(0) << endl;
	newDictionary.add(1, "hi");
	cout << "Entry 2: " << newDictionary.getValue(1) << endl;
	newDictionary.add(2, "how are you");
	cout << "Entry 3: " << newDictionary.getValue(2) << endl;
	newDictionary.add(3, "goodbye");
	cout << "Entry 4: " << newDictionary.getValue(3) << endl;
	cout << "Number of Entries: " << newDictionary.getNumberOfEntries() << endl;
	cout << "Contains: " << newDictionary.contains(0) << endl;
	newDictionary.remove(0);
	cout << "Number of Entries: " << newDictionary.getNumberOfEntries() << endl;
	newDictionary.clear();
	newDictionary.isEmpty();
	newDictionary.~ArrayDictionary();
	return 0;
}