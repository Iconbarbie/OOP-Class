#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    float salary;	
};
int main(){
	Employee emp1, emp2;
	emp1.name="James";
	emp1.salary=50000;
	emp1.id=1020;
	
	cout<<"Name:"<<emp1.name<<endl;
	
}