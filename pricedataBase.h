#ifndef PRICEDATABASE_H
#define PRICEDATABASE_H

#include <iostream>
#include <string>
using namespace std;

class PriceDatabase {
public:
    void showPowerToolMenu() {
        cout << "======= Select Power Tool =======" << endl;
        cout << "1. Drill - Rs.1500" << endl;
        cout << "2. Electric Saw - Rs.3000" << endl;
        cout << "3. Angle Grinder - Rs.2500" << endl;
        cout << "4. Heat Gun - Rs.1800" << endl;
        cout << "5. Power Sander - Rs.2200" << endl;
        cout << "6. Impact Driver - Rs.2800" << endl;
        cout << "7. Circular Saw - Rs.3200" << endl;
        cout << "8. Jigsaw - Rs.2600" << endl;
        cout << "9. Rotary Hammer - Rs.4000" << endl;
        cout << "10. Power Screwdriver - Rs.2000" << endl;
        cout << "-------------------------------------------" << endl;
    }

    void showHandToolMenu() {
        cout << "======= Select Hand Tool =======" << endl;
        cout << "1. Hammer - Rs.500" << endl;
        cout << "2. Screwdriver - Rs.200" << endl;
        cout << "3. Wrench - Rs.300" << endl;
        cout << "4. Pliers - Rs.400" << endl;
        cout << "5. Saw - Rs.800" << endl;
        cout << "6. Knife - Rs.150" << endl;
        cout << "7. Measuring Tape - Rs.250" << endl;
        cout << "8. Spanner - Rs.350" << endl;
        cout << "9. Allen Key - Rs.180" << endl;
        cout << "10. Chisel - Rs.220" << endl;
        cout << "-------------------------------------------" << endl;
    }

    string getPowerToolName(int choice) {
        if (choice == 1) return "Drill";
        else if (choice == 2) return "Electric Saw";
        else if (choice == 3) return "Angle Grinder";
        else if (choice == 4) return "Heat Gun";
        else if (choice == 5) return "Power Sander";
        else if (choice == 6) return "Impact Driver";
        else if (choice == 7) return "Circular Saw";
        else if (choice == 8) return "Jigsaw";
        else if (choice == 9) return "Rotary Hammer";
        else if (choice == 10) return "Power Screwdriver";
        else return "Unknown Power Tool";
    }

    int getPowerToolPrice(int choice) {
        if (choice == 1) return 1500;
        else if (choice == 2) return 3000;
        else if (choice == 3) return 2500;
        else if (choice == 4) return 1800;
        else if (choice == 5) return 2200;
        else if (choice == 6) return 2800;
        else if (choice == 7) return 3200;
        else if (choice == 8) return 2600;
        else if (choice == 9) return 4000;
        else if (choice == 10) return 2000;
        else return 0;
    }

    string getHandToolName(int choice) {
        if (choice == 1) return "Hammer";
        else if (choice == 2) return "Screwdriver";
        else if (choice == 3) return "Wrench";
        else if (choice == 4) return "Pliers";
        else if (choice == 5) return "Saw";
        else if (choice == 6) return "Knife";
        else if (choice == 7) return "Measuring Tape";
        else if (choice == 8) return "Spanner";
        else if (choice == 9) return "Allen Key";
        else if (choice == 10) return "Chisel";
        else return "Unknown Hand Tool";
    }

    int getHandToolPrice(int choice) {
        if (choice == 1) return 500;
        else if (choice == 2) return 200;
        else if (choice == 3) return 300;
        else if (choice == 4) return 400;
        else if (choice == 5) return 800;
        else if (choice == 6) return 150;
        else if (choice == 7) return 250;
        else if (choice == 8) return 350;
        else if (choice == 9) return 180;
        else if (choice == 10) return 220;
        else return 0;
    }
};

#endif
