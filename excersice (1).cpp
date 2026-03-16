#include <iostream>
#include <string>

using namespace std;

struct Patient {
    string name;
    int age;
    string diagnosis;
};


void displayPatients(const Patient& p) {
    cout << "Patient Record" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
}

int main() {
    Patient p1, p2;

   
    cout << "Enter details for Patient 1" << endl;
    cout << "Name: ";
    getline(cin, p1.name);
    cout << "Age: ";
    cin >> p1.age;
    cin.ignore(); 
    cout << "Diagnosis: ";
    getline(cin, p1.diagnosis);


    cout << "Enter details for Patient 2" << endl;
    cout << "Name: ";
    getline(cin, p2.name);
    cout << "Age: ";
    cin >> p2.age;
    cin.ignore();
    cout << "Diagnosis: ";
    getline(cin, p2.diagnosis);

    displayPatients(p1);
    displayPatients(p2);

    return 0;
}