#include <iostream>
using namespace std;

class Vehicle {
private:
    string registrationNumber;
    string brand;
    int year;

public:
    Vehicle(string regNo, string br, int yr) {
        registrationNumber = regNo;
        brand = br;
        year = yr;
    }
    
    virtual void displayInfo() {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(string regNo, string br, int yr, int doors)
        : Vehicle(regNo, br, yr) {
        numberOfDoors = doors;
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Truck : public Vehicle {
private:
    double loadCapacity;

public:
    Truck(string regNo, string br, int yr, double load)
        : Vehicle(regNo, br, yr) {
        loadCapacity = load;
    }

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
    }
};

int main() {

    Vehicle* vehicles[2];

    vehicles[0] = new Car("KDA123A", "Toyota", 2020, 4);
    vehicles[1] = new Truck("KDB456B", "Isuzu", 2018, 10.5);

    for(int i = 0; i < 2; i++) {
        cout << "\nVehicle Details:" << endl;
        vehicles[i]->displayInfo();
    }

    return 0;
}