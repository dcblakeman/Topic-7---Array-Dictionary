#pragma once
//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3

#include "DictionaryInterface.h"
#include "Entry.h"
#include "NotFoundException.h"
#include "PrecondViolatedExcept.h"
#include <memory>

template <class KeyType, class ValueType>
class ArrayDictionary : public DictionaryInterface<KeyType, ValueType>
{
private:
	static const int DEFAULT_CAPACITY = 20; // Small capacity to test for a full dictionary
	std::unique_ptr<Entry<KeyType, ValueType>[]> entries; // Array of dictionary entires
	int entryCount = 0; // Current count of dictionary entries
	int maxEntries = 20; // Maximum capacity of the dictionary
	void destroyDictionary();
	int findEntryIndex(int firstIndex, int lastIndex, const KeyType& searchKey) const;

public:
	ArrayDictionary();
	ArrayDictionary(int maxNumberOfEntries);
	ArrayDictionary(const ArrayDictionary<KeyType, ValueType>& dictionary);
	virtual ~ArrayDictionary();
	bool isEmpty() const;
	int getNumberOfEntries() const;
	bool add(const KeyType& searchKey, const ValueType& newValue) throw(PrecondViolatedExcept);
	bool remove(const KeyType& searchKey);
	void clear();
	ValueType getValue(const KeyType& searchKey) const throw(NotFoundException);
	bool contains(const KeyType& searchKey) const;
	void traverse(void visit(ValueType&)) const;
	void visit(ValueType& type) const;
}; // end ArrayDictionary