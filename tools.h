#ifndef TOOL_H
#define TOOL_H

#include <iostream>
#include "pricedatabase.h"
using namespace std;

class Tool {
protected:
    string name;
    int price;
    int quantity;
    PriceDatabase priceDB;

public:
    Tool() {} 
    Tool(string nam, int pric, int quant): name(nam), price(pric), quantity(quant) {}
    virtual ~Tool() {}  

    virtual void input() {
        int choice;
        priceDB.showToolMenu();
        cout << "Enter Tool Number You Want To Buy: ";
        cin >> choice;

        name = priceDB.getToolName(choice);
        price = priceDB.getToolPrice(choice);

        if (price == 0) {
            cout << "Invalid choice! Enter tool name manually: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
        }
    }

    virtual void display() const {
        cout << "Tool name: " << name << endl;
        cout << "Price: Rs." << price << endl;
    }

    int getPrice() const { return price; }
};

class PowerTool : public Tool {
public:
    PowerTool() {}
    PowerTool(string nam, int pric, int quant) : Tool(nam, pric, quant) {}

    void display() const override {
        cout << "[Power Tool]" << endl;
        Tool::display();
    }
};

class HandTool : public Tool {
public:
    HandTool() {}
    HandTool(string nam, int pric, int quant) : Tool(nam, pric, quant) {}

    void display() const override {
        cout << "[Hand Tool]" << endl;
        Tool::display();
    }
};

#endif
