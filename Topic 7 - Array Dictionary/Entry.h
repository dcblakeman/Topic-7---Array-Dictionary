#pragma once
//Daniel Blakeman
//CIS 2207 502
//03-26-2022
//Complete the implementation of the class ArrayDictionary as given in Listing 18-3

template <class KeyType, class ValueType>
class Entry
{
private:
	KeyType key;
	ValueType value;

protected:
	void setKey(const KeyType& searchKey);

public:
	Entry();
	Entry(const KeyType& searchKey, const ValueType& newValue);
	ValueType getValue() const;
	KeyType getKey() const;
	void setValue(const ValueType& newValue);


	bool operator==(const Entry<KeyType, ValueType>& rightHandValue) const;
	bool operator>(const Entry<KeyType, ValueType>& rightHandValue) const;
};//end Entry