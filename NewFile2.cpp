#include<iostream>
using namespace std;
class MyClass {
	public:
		MyClass() {
			cout<< "Hello World!"<<endl;
		}
 ~MyClass(){
	   cout<<"Destructor Invoked"<<endl;
   }
		};

int main() {
	MyClass myObj1;
	MyClass myObj2;
	MyClass myObj3;
	return 0;
}