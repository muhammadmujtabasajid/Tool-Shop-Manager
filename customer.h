#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer {
protected:
    int customer_id;
    string name;
    string contact;

public: 
    Customer() {

    }  

    Customer(int customid, string na, string cont)
        : customer_id(customid), name(na), contact(cont) {}

    void inputCustomerInfo() {
        cout << "Enter Customer ID: ";
        cin >> customer_id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Contact: ";
        cin >> contact;
    }

    void displayCustomerInfo() {
        cout << "Customer ID: " << customer_id << endl;
        cout << "Name: " << name << endl;
        cout << "Contact: " << contact << endl;
    }

    int getCustomerID() {
        return customer_id;
    }

    string getCustomerName() {
        return name;
    }
};

#endif
