//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3
#include "ArrayDictionary.h"
#include <string>
#include <iostream>
using namespace std;

template<class KeyType, class ValueType>
void ArrayDictionary<KeyType, ValueType>::destroyDictionary()
{
}

template<class KeyType, class ValueType>
int ArrayDictionary<KeyType, ValueType>::findEntryIndex(int firstIndex, int lastIndex, const KeyType& searchKey) const
{
}

template<class KeyType, class ValueType>
ArrayDictionary<KeyType, ValueType>::ArrayDictionary()
{
}

template<class KeyType, class ValueType>
ArrayDictionary<KeyType, ValueType>::ArrayDictionary(int maxNumberOfEntries)
{
	maxEntries = maxNumberOfEntries;
}

template<class KeyType, class ValueType>
ArrayDictionary<KeyType, ValueType>::ArrayDictionary(const ArrayDictionary<KeyType, ValueType>& dictionary)
{
	entries = dictionary;
}

template<class KeyType, class ValueType>
ArrayDictionary<KeyType, ValueType>::~ArrayDictionary()
{
}

template<class KeyType, class ValueType>
bool ArrayDictionary<KeyType, ValueType>::isEmpty() const
{
	cout << "Is it empty?: ";
	if (entryCount == 0)
	{
		cout << "Yes" << endl;
		return true;
	}
		
	else
	{
		cout << "No" << endl;
		return false;
	}
		
}

template<class KeyType, class ValueType>
int ArrayDictionary<KeyType, ValueType>::getNumberOfEntries() const
{
	return entryCount;
}

template<class KeyType, class ValueType>
bool ArrayDictionary<KeyType, ValueType>::add(const KeyType& searchKey, const ValueType& newValue) throw(PrecondViolatedExcept)
{
	bool ableToInsert = (entryCount < maxEntries);
	if (ableToInsert)
	{
		for(int index = 0; index <= entryCount; index++)
		{
			//Find index
			if (searchKey != entries[index].getKey())
			{
				//Insert new entry
				entries[index] = Entry<KeyType, ValueType>(searchKey, newValue);
				entryCount++;//Increase count of entries
				return ableToInsert;
			}//end add
		}
	}//end while
}

			

template<class KeyType, class ValueType>
bool ArrayDictionary<KeyType, ValueType>::remove(const KeyType& searchKey)
{
	bool ableToRemove = (searchKey <= entryCount);
	if (ableToRemove)
	{
		
		for(int index = 0; index <= entryCount; index++)
		{
			//Find index
			if (searchKey == entries[index].getKey())
			{
				cout << "test 30" << endl;
				//Remove entry
				for (int x = index; index < entryCount; index++)
				{
					entries[index] = entries[index + 1];
				}
				entryCount--;
			}
		}//end while
		return ableToRemove;
	}
	else
	{
		cout << "Unable to find entry.";
		return false;
	}
		
}

template<class KeyType, class ValueType>
void ArrayDictionary<KeyType, ValueType>::clear()
{
	entryCount = 0;
}

template<class KeyType, class ValueType>
ValueType ArrayDictionary<KeyType, ValueType>::getValue(const KeyType& searchKey) const throw(NotFoundException)
{
	for(int index = 0; index < entryCount; index++)
	{
		//Find index
		if (searchKey == entries[index].getKey())
		{
			return entries[index].getValue();
		}
	}
	//throw exception(NotFoundException);
}

template<class KeyType, class ValueType>
bool ArrayDictionary<KeyType, ValueType>::contains(const KeyType& searchKey) const
{
	for(int index = 0; index < entryCount; index++)
	{
		//Find index
		if (searchKey == entries[index].getKey())
		{
			cout << "Yes it contains the entry." << endl;
			return true;
		}
	}
	cout << "No it does not contain the entry." << endl;
	return false;
}

template<class KeyType, class ValueType>
void ArrayDictionary<KeyType, ValueType>::traverse(void visit(ValueType&)) const
{
}

template<class KeyType, class ValueType>
void ArrayDictionary<KeyType, ValueType>::visit(ValueType& type) const
{
	ValueType newType = type;
}
