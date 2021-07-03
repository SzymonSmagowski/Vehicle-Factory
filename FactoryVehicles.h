#pragma once
#define SIZE 10
#include <iostream>



class Vehicle {
	friend class Factory;
	char serialName[5];
	int price;
	double prodCost;
	bool done;
	char type;
public:
	Vehicle(const char ID[], char t, int _price = 10000, double _prodCost = 5, bool _done = false);
	Vehicle();
	char GetType();
	void finished() {
		this->done = true;
	}
	bool ifCheaper(Vehicle& v);
	double Balance();
	friend istream& operator>>(istream& in, Vehicle& d);
	friend ostream& operator<<(ostream& out, const Vehicle& d);
	bool operator==(const Vehicle& d);
	void operator=(const Vehicle& d);
};

class Factory {
	Vehicle fleet[SIZE];
	int factoryID;
	int currentFleetCount;
public:
	static int factoryCount;
	friend int CarsCount(Factory &f);
	int TruckCount();
	int MotoCount();
	bool IsFull();
	Factory();
	void AddVehicle(Vehicle& d);
	void DeleteVehicle(Vehicle& d);
	friend istream& operator>>(istream& in, Factory& f);
	friend ostream& operator<<(ostream& out, const Factory& d);
	bool operator>(Factory f);
	bool operator<(Factory f);
};