#ifndef SALE_H
#define SALE_H

#include <iostream>
#include "tools.h"
#include "customer.h"
using namespace std;

class Sale {
private:
    Customer customer;
    const Tool& tool;   
    int quantitySold;
    double totalPrice;

public:
    Sale(Customer cust, const Tool& t, int qty) 
        : customer(cust), tool(t), quantitySold(qty) 
    {
        totalPrice = quantitySold * tool.getPrice();
    }

    void display()  {
        customer.displayCustomerInfo();
        tool.display();  
        cout << "Quantity Sold: " << quantitySold << endl;
        cout << "Total Price: Rs." << totalPrice << endl;
        cout << "----------------------------------------" << endl;
    }
};

#endif
