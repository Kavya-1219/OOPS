#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(string mk, string mdl, int yr, int capacity, string fuel) : Vehicle(mk, mdl, yr), 
        seatingCapacity(capacity), fuelType(fuel) {}
    void displayInfo() {
        cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << endl;
        cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;
public:
    Truck(string mk, string mdl, int yr, int payload, int towing) : Vehicle(mk, mdl, yr),
        payloadCapacity(payload), towingCapacity(towing) {}
    void displayInfo() {
        cout << "Truck Make: " << make << ", Model: " << model << ", Year: " << year << endl;
        cout << "Payload Capacity: " << payloadCapacity << " lbs, Towing Capacity: " << towingCapacity << " lbs" << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck truck("Ford", "F-150", 2023, 2000, 10000);

    car.displayInfo();
    truck.displayInfo();

    return 0;
}

