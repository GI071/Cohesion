#include <iostream>
#include "Order.h"

using namespace std;

	
int main() {
	
	Order i;
	
	i.addItem("CAR", "BMW", 5);
	i.addItem("CAR", "Mersedess", 4);
	i.addItem("PC", "IBM", 5);
	i.addItem("CAR", "Mersedess", 5);
	i.addItem("CAR", "Toyota", 5);
	i.addItem("PC", "ASUS", 5);
	i.printItem();
	
	i.removeItem("CAR", "Toyota", 4);
	i.removeItem("CARR", "Toyota", 4);
	i.removeItem("CAR", "Toyotata", 4);
	i.removeItem("PC", "ASUS", 6);
	i.printItem();
	
	i.printCategory("CAR");
	i.printCategory("CARR");

	i.addOrder("Giorgi", "CAR", "BMW", 1);
	i.addOrder("Giorgi", "PC", "BMW", 1);
	i.addCustomer("Giorgi");
	i.printItem();
	
	i.addItemToOrder("Giorgi", "CAR", "BMW", 2);

	i.orderList("CAR");
	i.deductItemFromOrder("Giorgi", "CAR", "BMW", 1);
	i.orderList("CAR");
	
	
  return 0;
}