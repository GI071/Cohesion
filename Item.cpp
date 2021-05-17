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

Item::Item(){};
Item::~Item(){};

void Item::orderList(string cat) {
	cout<<cat<<" - order list:"<<endl;
	it = order.begin();
	while (it != order.end()) {
		
		
		pt = it->second.begin();
		while (pt != it->second.end() && pt->first == cat) {
			
			
			ptIn = pt->second.begin();
			while (ptIn != pt->second.end()) {
				cout<<"Customer - "<<it->first<<", ";
				cout<<"Category - "<<pt->first<<", ";
				cout<<"Item - "<<ptIn->first<<", ";
				cout<<"Quantity - "<<ptIn->second<<endl;
				++ptIn;
			}
			++pt;
		}
		++it;
	}
	
}


