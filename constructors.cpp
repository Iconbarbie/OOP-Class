#include<iostream>
using namespace std;
class Car{
	string brand;
	string model;
	float price;
	int mileage;
	
	public:
		Car(string b,string m,float p,int mi){
			brand=b;
			model=m;
			price=p;
			mileage=mi;
		}
		void display(){
			cout<<"brand:"<<brand<<endl;
			cout<<"model:"<<model<<endl;
			cout<<"price:"<<price<<endl;
			cout<<"mileage:"<<mileage<<endl;
		}
		void drive(int distance) {
			mileage= mileage + distance;
			cout<<"Updated mileage:"<<mileage<<endl;
		}
};
int main() {
	Car Car1("Toyota","Corolla",20000,5000);
	Car1.display();
	Car1.drive(150);
	Car1.drive(300);
	return 0;
}