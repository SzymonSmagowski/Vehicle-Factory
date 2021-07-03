#include <iostream>
using namespace std;
#include <iomanip>
#include "FactoryVehicles.h"

Vehicle::Vehicle(const char ID[], char t, int _price, double _prodCost, bool _done) {
	price = _price;
	prodCost = _prodCost;
	done = _done;
	for (int i = 0; i < 5; i++) {
		serialName[i] = ID[i];
	}
	type = t;
}

Vehicle::Vehicle() {
	for (int i = 0; i < 5; i++) {
		serialName[i] = 'a';
	}
	price = 10000;
	prodCost = 5;
	type = 'c';
	done = false;
}
bool Vehicle::ifCheaper(Vehicle& v)
{
	return (this->price < v.price);
}

double Vehicle::Balance() {
	double balance = this->price - this->prodCost*1000;
	return balance;
}

void Vehicle::operator=(const Vehicle& d)
{
	for (int i = 0; i < 5; i++) {
		this->serialName[i] = d.serialName[i];
	}
	this->done = d.done;
	this->price = d.price;
	this->type = d.type;
	this->prodCost = d.prodCost;
}

istream& operator>>(istream& in, Vehicle& d) {
	//char* ch;
	bool checking = true;
	//char temporaryName[5];
	do
	{
		cout << "Enter a serial name: (5 characters)" << endl;
		cin >> d.serialName;
		if (strlen(d.serialName)==5) {
			checking = false;
		}
	} while (checking);
	do
	{
		cout << "Enter a type of a vehicle (c for car, t for truck, m for motocycle)" << endl;
		cin >> d.type;
	} while (!(d.type == 'c' || d.type == 'm' || d.type == 't'));
	do
	{
		cout << "Enter a production cost for a vehicle (in thousands)" << endl;
		cin >> d.prodCost;
	} while (d.prodCost < 0);
	do
	{
		cout << "Enter a price for a vehicle" << endl;
		cin >> d.price;
	} while (d.price < 0);
	char ans;
	do
	{
		cout << "Is the vehicle finished? y for yes, n for no." << endl;
		cin >> ans;
		if (ans == 'y') {
			d.done = true;
		}
		if (ans == 'n') {
			d.done = false;
		}
	} while (!(ans=='y'||ans=='n'));

	return in;
}

ostream& operator<<(ostream& out, const Vehicle& d) {
	const char* sam[] = {"c", "a", "r"};
	const char* mot[] = { "m", "o", "t", "o"};
	const char* truc[] = { "t", "r", "u", "c","k"};
	out << "This is ";
	if (d.done == false) {
		out << "unfinished ";
	}
	if (d.done == true) {
		out << "finished ";
	}
	if (d.type == 'c') {
		for (int i = 0; i < 3; i++) {
			out << sam[i];
		}
	}
	if (d.type == 't') {
		for (int i = 0; i < 5; i++) {
			out << truc[i];
		}
	}
	if (d.type == 'm') {
		for (int i = 0; i < 4; i++) {
			out << mot[i];
		}
	}
	out << ". It's price is " << d.price << ". Production cost: " << d.prodCost * 1000 << ". Serial name: ";
	for (int i = 0; i < 5; i++) {
		out << d.serialName[i];
	}
	out << "." << endl;
	return out;
}

bool Vehicle::operator==(const Vehicle& d)
{
	for (int i = 0; i < 5; i++) {
		if (this->serialName[i] != d.serialName[i]) {
			return false;
		}
	}
	return true;
}

char Vehicle::GetType() {
	return this->type;
}

void Factory::AddVehicle(Vehicle& d) {
	if (currentFleetCount == SIZE) {
		cout << "Can't add a vehicle. Factory is full. " << endl;
		return;
	}
	for (int i = 0; i < SIZE; i++) {
		if (d == this->fleet[i]) {
			cout << "The vehicle is already in this factory." << endl;
			return;
		}
	}
	this->fleet[currentFleetCount] = d;
	currentFleetCount++;
}

void Factory::DeleteVehicle(Vehicle& d) {
	bool hit = false;
	for (int i = 0; i < this->currentFleetCount; i++) {
		if (d == this->fleet[i]) {
			hit = true;
		}
		if (hit &&(i==currentFleetCount-1)) {
			currentFleetCount--;
			cout << "Vehicle "; 
			for (int i = 0; i < 5; i++) {
				cout << d.serialName[i];
			}
			cout << " deleted from factory " << factoryID << "." << endl;
			return;
		}
		if (hit) {
			this->fleet[i] = this->fleet[i + 1];
		}
	}
	cout << "Can't delete a vehicle, because it is not in factory " << endl;
}

istream& operator>>(istream& in, Factory& f) {
	cout << "Created a new factory." << endl;
	char ans;
	do
	{
		cout << "If you want to add a vehicle press y" << endl;
		cin >> ans;
		if (ans == 'y') {
			Vehicle test;
			cin >> test;
			f.AddVehicle(test);
		}
	} while (ans == 'y');
	return in;
}

ostream& operator<<(ostream& out, const Factory& d) {
	out << endl << "Factory " << d.factoryID << ":" << endl;
	for (int i = 0; i < d.currentFleetCount; i++) {
		out << d.fleet[i] << endl;
	}
	out << endl;
	return out;
}

bool Factory::operator>(Factory f) {
	if (this->currentFleetCount > f.currentFleetCount) {
		return true;
	}
	else
	{
		return false;
	}
}

bool Factory::operator<(Factory f) {
	if (this->currentFleetCount < f.currentFleetCount) {
		return true;
	}
	else
	{
		return false;
	}
}

bool Factory::IsFull()
{
	if (this->currentFleetCount != SIZE) {
		return false;
	}
	else
	{
		return true;
	}
}	

int CarsCount(Factory &f) {
	int counter = 0;
	for (int i = 0; i < f.currentFleetCount; i++) {
		if (f.fleet[i].GetType() == 'c') {
			counter++;
		}
	}
	return counter;
}

Factory::Factory()
{
	factoryID = ++factoryCount;
	currentFleetCount = 0;
}


int Factory::TruckCount() {
	int counter = 0;
	for (int i = 0; i < this->currentFleetCount; i++) {
		if (this->fleet[i].type == 't') {
			counter++;
		}
	}
	return counter;
}

int Factory::MotoCount() {
	int counter = 0;
	for (int i = 0; i < this->currentFleetCount; i++) {
		if (this->fleet[i].type == 'm') {
			counter++;
		}
	}
	return counter;
}