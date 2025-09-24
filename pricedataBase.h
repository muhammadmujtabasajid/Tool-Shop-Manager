#ifndef PRICEDATABASE_H
#define PRICEDATABASE_H

#include <iostream>
#include <string>
using namespace std;

class PriceDatabase {
public:
    void showToolMenu() {
        cout << "======= Select Tool =======" << endl;
        cout << "1. Hammer - Rs.500" << endl;
        cout << "2. Screwdriver - Rs.200" << endl;
        cout << "3. Wrench - Rs.300" << endl;
        cout << "4. Pliers - Rs.400" << endl;
        cout << "5. Drill - Rs.1500" << endl;
        cout << "6. Saw - Rs.800" << endl;
        cout << "7. Knife - Rs.150" << endl;
        cout << "8. Measuring Tape - Rs.250" << endl;
        cout << "9. Spanner - Rs.350" << endl;
        cout << "10. Allen Key - Rs.180" << endl;
        cout << "Enter choice (1-10): ";
        cout<<endl;
        cout<<"-------------------------------------------"<<endl;
    }

    string getToolName(int choice) {
        if (choice == 1) return "Hammer";
        else if (choice == 2) return "Screwdriver";
        else if (choice == 3) return "Wrench";
        else if (choice == 4) return "Pliers";
        else if (choice == 5) return "Drill";
        else if (choice == 6) return "Saw";
        else if (choice == 7) return "Knife";
        else if (choice == 8) return "Measuring Tape";
        else if (choice == 9) return "Spanner";
        else if (choice == 10) return "Allen Key";
        else return "Unknown";
    }

    int getToolPrice(int choice) {
        if (choice == 1) return 500;
        else if (choice == 2) return 200;
        else if (choice == 3) return 300;
        else if (choice == 4) return 400;
        else if (choice == 5) return 1500;
        else if (choice == 6) return 800;
        else if (choice == 7) return 150;
        else if (choice == 8) return 250;
        else if (choice == 9) return 350;
        else if (choice == 10) return 180;
        else return 0;
    }
};

#endif