#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <memory>
#include <vector>
#include "tools.h"
#include "customer.h"
#include "sale.h"

using namespace std;

class Menu {
public:
    void showMenuOnce() {
        Customer customer;
        vector<Sale> allSales;   // multiple purchases store karne ke liye
        unique_ptr<Tool> tool; 
        int toolType;
        int quantity; 
        int wantMore;

        cout << "---------------- Huda Tools Sale System ----------------" << endl;
        customer.inputCustomerInfo();

    anythingmore:
        cout << "Select Tool Type :" << endl;
        cout << " 1. Power Tool " << endl;
        cout << " 2. Hand Tool " << endl;
        cout << " Enter Choice: ";
        cin >> toolType;

        if (toolType == 1) {
            tool = make_unique<PowerTool>();
            tool->input();
        }
        else if (toolType == 2) {
            tool = make_unique<HandTool>();
            tool->input();
        }
        else {
            cout << "Invalid input !!!!!" << endl;
            return;
        }

        cout << "Enter quantity to purchase: ";
        cin >> quantity;

        // Store current sale
        allSales.emplace_back(customer, *tool, quantity);

        cout<<"Want to buy anything else ? "<<endl;
        cout<<" if yes then press 1 "<<endl;
        cout<<" if not then press 2 "<<endl;
        cin>>wantMore;
        if(wantMore==1) {
            goto anythingmore;
        }

    keepgoing:
        cout << "--------------------------------" << endl;
        cout << "             Receipt            " << endl;
        cout << "--------------------------------" << endl;

        for (auto &sale : allSales) {
            sale.display();
            cout << "-----------------------------" << endl;
        }
    }
};

#endif
