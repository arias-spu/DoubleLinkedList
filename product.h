#pragma once

#include <string>
#include <iostream>
using std::string;
using std::ostream;
using std::istream;

class Product{
	char* _name;
	char* _code;
	size_t _quantity;
	float _cost;
	float _profit; // percentage over cost
public:
	Product(const string&, const string&, float, float=0.1, size_t=0);
	Product(const Product&);
	~Product();
	Product& operator=(const Product&);
	bool operator==(const Product&)const;
	string ToString()const;
	void AddToInventory(size_t);
	float GetSellPrice()const;
	void IncreaseProfit(float);
	bool SendToStream(ostream&)const;
	bool GetFromStream(istream&);

};
