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

Category::Category(){};
Category::~Category(){};


	
void Category::addItem(string cat, string itemm, int quantity) {
	itr = item.begin();
	while (itr != item.end() && itr->first != cat) {
		++itr;
	}
	
	if (itr == item.end()) {
		itr = item.insert(make_pair(cat, multimap<string,int>()));
		itr->second.insert(make_pair(itemm,quantity));
		return;
	}
	itr = item.find(cat);
	ptr = itr->second.begin();
	while (ptr != itr->second.end() && ptr->first != itemm) {
		++ptr;
	}
	
	if (ptr == itr->second.end()) {
		itr->second.insert(make_pair(itemm,quantity));
		return;
	} else {
		ptr = itr->second.find(itemm);
		if (ptr->first == itemm ) {
			ptr->second += quantity;
		}
	}
}

void Category::removeItem(string cat, string itemm, int quantity) {
	itr = item.begin();
	while (itr != item.end() && itr->first != cat) {
		++itr;
	}
	if (itr == item.end()) {
		cout<<"There is NOT Category - "<<cat<<endl;
		return;
	}
	
	
	ptr = itr->second.begin();
	while (ptr != itr->second.end() && ptr->first != itemm) {
		++ptr;
	}
	
	itr = item.find(cat);
	ptr = itr->second.begin();
	while (ptr != itr->second.end() && ptr->first != itemm) {
		++ptr;
	}
	
	if (ptr == itr->second.end()) {
		cout<<"There is NOT Item - "<<itemm<<" in Category "<<cat<<endl;
		return;
	} else {
		ptr = itr->second.find(itemm);
		if (ptr->first == itemm ) {
			if (ptr->second >= quantity) {
				ptr->second -= quantity;
				cout<<"Removed "<<itemm<<" in quantity of "<<quantity<<endl;
			} else {
				ptr->second = 0;
				cout<<"Removed "<<itemm<<"'s total quantity"<<endl;
			}
		}
	}
	
}

void Category::printCategory(string cat) {
	itr = item.begin();
	while (itr != item.end() && itr->first != cat) {
		++itr;
	}
	if (itr == item.end()) {
		cout<<"There is NOT Category - "<<cat<<endl;
		return;
	}
	
	itr = item.find(cat);
	if (itr == item.find(cat)) {
		ptr = itr->second.begin();
		while (ptr != itr->second.end()) {
			cout<< "Caterory: " << itr->first
					<< " Item: " << ptr->first
					<< " Quantity: " << ptr->second << endl;
			++ptr;
		}
	} else {
		cout<<"There is NOT Category - "<<cat<<endl;
	}
}

void Category::printItem(){
	cout<<"Items full List:"<<endl;
	
	for (itr = item.begin(); itr != item.end(); itr++) {

		for (ptr = itr->second.begin(); ptr != itr->second.end(); ptr++) {
			cout << "Caterory: " << itr->first
				<< " Item: " << ptr->first
				<< " Quantity: " << ptr->second << endl;
		}
	}
	
}


