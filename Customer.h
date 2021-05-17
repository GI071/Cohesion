#ifndef CUSTOMER_H
#define CUSTOMER_H

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
#include "Category.h"
using namespace std;


class Customer : public Category {
	public:
	multimap<std::string, multimap<std::string, multimap<std::string, int>> >order;
	multimap<std::string, multimap<std::string, multimap<std::string, int>> >::iterator it;
	multimap<std::string, multimap<std::string, int> >::iterator pt;
	multimap<std::string, int>::iterator ptIn;
	
	Customer();
	~Customer();
	
	void addCustomer(string cusName);
	
	void addOrder(string name, string cat, string itemm, int quantity);
	
};

#endif

