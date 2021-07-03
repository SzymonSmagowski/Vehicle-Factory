// Homework1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include "FactoryVehicles.h"

int Factory::factoryCount = 0;


int main()
{
    // ==============PART 1 ============================================================================================================================
    /*cout << endl << endl << "==============PART 1 =================" << endl << endl;
    Vehicle v1("aaaaa", 'c', 7000, (4.5), false);
    cout << "Balance for vehicle 1: " << v1.Balance() << endl;
    Vehicle v2("aaaaa", 'c', 8000, (4.5), false);
    cout << "Vehicle v1 should be cheaper: ";
    if (v1.ifCheaper(v2)) {
        cout << "Good!" << endl;
    }
    else
    {
        cout << "Bad!" << endl;
    }*/
    // ==============PART 2 ============================================================================================================================
    /*cout << endl << endl << "==============PART 2 =================" << endl << endl;
    Vehicle v3;
    cin >> v3;
    cout << v3 << endl;
    cout << "Now, let's say v3 is finished: " << endl;
    v3.finished();
    cout << v3;
    cout << "V2 should be the same as v3: " << endl;
    v2 = v3;
    cout << v2;
    cout << v3;
    if (v2 == v3) {
        cout << "v2 is the same as v3" << endl;
    }*/
    //==============================================================================================================================
    // ==============PART 3 ========================================================================================================
    /*cout << endl << endl << "==============PART 3 =================" << endl << endl;
    Factory f1;
    cout << "f1 should not be full: " << endl;
    if (f1.IsFull()) {
        cout << "f1 is full." << endl;
    }
    else
    {
        cout << "f1 is not full." << endl;
    }
    Vehicle v10("aaahg", 'c', 7000, (4.5), false);
    Vehicle v11("aaajj", 't', 7000, (4.5), false);
    Vehicle v12("aaadd", 'c', 7000, (4.5), false);
    Vehicle v13("aaagg", 'm', 7000, (4.5), false);
    Vehicle v14("aaauu", 'c', 7000, (4.5), false);
    Vehicle v15("aaaii", 'c', 7000, (4.5), false);
    Vehicle v16("aaaoo", 'm', 7000, (4.5), false);
    Vehicle v17("aaapp", 'c', 7000, (4.5), false);
    Vehicle v18("aaa88", 'c', 7000, (4.5), false);
    Vehicle v19("aaa99", 'c', 7000, (4.5), false);
    f1.AddVehicle(v10);
    f1.AddVehicle(v11);
    f1.AddVehicle(v12);
    f1.AddVehicle(v13);
    f1.AddVehicle(v14);
    f1.AddVehicle(v15);
    f1.AddVehicle(v16);
    f1.AddVehicle(v17);
    f1.AddVehicle(v18);
    f1.AddVehicle(v19);
    cout << "f1 should be full: " << endl;
    if (f1.IsFull()) {
        cout << "f1 is full." << endl;
    }
    else
    {
        cout << "f1 is not full." << endl;
    }
    cout << "There should be 7 cars: " << CarsCount(f1) << endl;
    cout << "There should be 3 trucks: " << f1.TruckCount() << endl;
    cout << "There should be 2 motos: " << f1.MotoCount() << endl;*/
    //==================================================================================================================
    // ==============PART 4 ============================================================================================
    /*cout << endl << endl << "==============PART 4 =================" << endl << endl;
    f1.DeleteVehicle(v10);
    cout << "f1 should not be full: " << endl;
    if (f1.IsFull()) {
        cout << "f1 is full." << endl;
    }
    else
    {
        cout << "f1 is not full." << endl;
    }
    cout << f1;
    cout << "Press y if you want to create a factory: " << endl;
    char test1;
    cin >> test1;
    if (test1 == 'y') {
        Factory f2;
        cin >> f2;
        cout << f2;
        cout << "Which factory is bigger?" << endl;
        if (f1 > f2) {
            cout << "Factory f1 is bigger than f2" << endl;
        }
        if (f2 < f1) {
            cout << "Factory f2 is smaller than f1" << endl;
        }
    }*/
    //===========================================================================================================
    return 0;
}


