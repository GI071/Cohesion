#ifndef ITEM_H
#define ITEM_H

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
#include "Customer.h"
using namespace std;


class Item : public Customer {
	public:
	
	
	Item();
	~Item();
	
	void orderList(string cat);
	
	
};

#endif

