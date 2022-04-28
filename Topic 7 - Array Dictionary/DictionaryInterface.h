#pragma once
//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3

template<class KeyType, class ValueType>
class DictionaryInterface
{
public:
	virtual bool isEmpty() const = 0;
	virtual int getNumberOfEntries() const = 0;
	virtual bool add(const KeyType& searchKey, const ValueType& newValue) = 0;
	virtual bool remove(const KeyType& searchKey) = 0;
	virtual void clear() = 0;
	virtual bool contains(const KeyType& searchKey) const = 0;
	virtual void traverse(void visit(ValueType&)) const = 0;
	virtual ~DictionaryInterface() {}
};//end DictionaryInterface