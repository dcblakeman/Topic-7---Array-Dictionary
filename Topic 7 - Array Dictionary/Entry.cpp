//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3
#include "Entry.h"

template<class KeyType, class ValueType>
void Entry<KeyType, ValueType>::setKey(const KeyType& searchKey)
{
	key = searchKey;
}

template<class KeyType, class ValueType>
Entry<KeyType, ValueType>::Entry()
{
}

template<class KeyType, class ValueType>
Entry<KeyType, ValueType>::Entry(const KeyType& searchKey, const ValueType& newValue)
{
	key = searchKey;
	value = newValue;
}

template<class KeyType, class ValueType>
ValueType Entry<KeyType, ValueType>::getValue() const
{
	return value;
}

template<class KeyType, class ValueType>
KeyType Entry<KeyType, ValueType>::getKey() const
{
	return key;
}

template<class KeyType, class ValueType>
void Entry<KeyType, ValueType>::setValue(const ValueType& newValue)
{
	value = newValue;
}





//----------------------Used for storing entries in a binary search try--------------------------
template<class KeyType, class ValueType>
bool Entry<KeyType, ValueType>::operator==(const Entry<KeyType, ValueType>& rightHandValue) const
{
	return false;
}

template<class KeyType, class ValueType>
bool Entry<KeyType, ValueType>::operator>(const Entry<KeyType, ValueType>& rightHandValue) const
{
	return false;
}
