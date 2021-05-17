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
#include "Order.h"
using namespace std;


Order::Order(){};
Order::~Order(){};
	
void Order::addItemToOrder(string name, string cat, string itemm, int quantity) {
	// cout<<__PRETTY_FUNCTION__<<"\n"<<endl;
	
	itr = item.begin();
	while (itr != item.end() && itr->first == cat) {
		if(itr->first == cat) {
			ptr = itr->second.begin();
			while (ptr != itr->second.end() && ptr->first == itemm) {
				if (ptr->first == itemm) {
					if (ptr->second < quantity) {
						cout<<"Not enouth item quantity"<<endl;
						return;
					} else {
						ptr->second -= quantity;
					}
				}
				++ptr;
			}
		}
		++itr;
	}
	
	it = order.begin();
	while (it != order.end() && it->first == name) {
		if (it->first == name) {
			pt = it->second.begin();
			while (pt != it->second.end() && pt->first == cat) {
				if (pt->first == cat) {
					ptIn = pt->second.begin();
					while (ptIn != pt->second.end() && ptIn->first == itemm) {
						if (ptIn->first == itemm) {
							ptIn->second += quantity;
							cout<<itemm<<" item added in quantity of "<<quantity<<endl;
						}
						++ptIn;
					}
				}
				++pt;
			}
		}
		++it;
	}
}


void Order::deductItemFromOrder(string name, string cat, string itemm, int quantity) {
	// cout<<__PRETTY_FUNCTION__<<"\n"<<endl;
	
	it = order.begin();
	while (it != order.end() && it->first == name) {
		if (it->first == name) {
			pt = it->second.begin();
			while (pt != it->second.end() && pt->first == cat) {
				if (pt->first == cat) {
					ptIn = pt->second.begin();
					while (ptIn != pt->second.end() && ptIn->first == itemm) {
						if (ptIn->first == itemm) {
							ptIn->second -= quantity;
							cout<<itemm<<" item deducted in quantity of "<<quantity<<endl;
						}
						++ptIn;
					}
				}
				++pt;
			}
		}
		++it;
	}
}
	
