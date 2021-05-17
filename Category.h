#ifndef CATEGORY_H
#define CATEGORY_H

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
using namespace std;

class Category {
	public:
	multimap<std::string, multimap<std::string, int> >item;
	multimap<std::string, multimap<std::string, int> >::iterator itr;
	multimap<std::string, int>::iterator ptr;
	
	Category();
	~Category();
	
	void addItem(string cat, string itemm, int quantity);
	
	void removeItem(string cat, string itemm, int quantity);
	
	void printCategory(string cat);
	
	void printItem();
};

#endif

