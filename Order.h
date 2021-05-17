#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <functional>
#include <memory>
#include <utility>
#include <bits/stdc++.h>
#include "Item.h"
using namespace std;


class Order : public Item {
	public:
	
	Order();
	~Order();
	
	void addItemToOrder(string name, string cat, string itemm, int quantity);
	
	void deductItemFromOrder(string name, string cat, string itemm, int quantity);

};

#endif

