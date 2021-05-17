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


Customer::Customer(){};
Customer::~Customer(){};
	
void Customer::addCustomer(string cusName) {
	it = order.begin();
	while (it != order.end() && it->first != cusName) {
		++it;
	}
	if (it == order.end()) {
		it = order.insert(make_pair(cusName, multimap<string, multimap<std::string, int>>()));
		return;
	} else {
		cout<<"Customer "<<cusName<<" is already registered"<<endl;
	}
}


void Customer::addOrder(string name, string cat, string itemm, int quantity) {

itr = item.begin();
while (itr != item.end() && itr->first != cat) {
	++itr;
}
if (itr == item.end()) {
	cout<<"There is NOT Category - "<<cat<<endl;
	return;
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
			
			it = order.insert(make_pair(name, multimap<string, multimap<string,int>>()));
			it->second.insert(make_pair(cat, multimap<string, int>())); // ....>>>>>>>>>>>>
			pt = it->second.begin();
			ptIn = pt->second.insert(make_pair(itemm, quantity));
			cout<<name<<" Ordered "<<itemm<<" in quantity of "<<quantity<<endl;
		} else {
			quantity = ptr->second;
			ptr->second = 0;
			
			it = order.insert(make_pair(name, multimap<string, multimap<string,int>>()));
			it->second.insert(make_pair(cat, multimap<string, int>())); // ....>>>>>>>>>>>>
			pt = it->second.begin();
			ptIn = pt->second.insert(make_pair(itemm, quantity));
			cout<<name<<" Ordered "<<itemm<<"'s total quantity: "<<quantity<<endl;
		}
	}
}

}

