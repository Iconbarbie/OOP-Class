#include<iostream>
using namespace std;
class Cylinder {
	public:
		float radius, height;
		
		float Volume(){
			return 3.142* radius* radius* height;
		}
		float SurfaceArea(){
			return 2* 3.142*radius* radius + 2* 3.142* radius* height;
		}
};
int main(){
	Cylinder cyl1;
	cyl1.radius=14;
	cyl1.height=2;
	cyl1.Volume();
	
	cout<<"The volume is: "<<cyl1.Volume()<<endl;
	cout<<"The suraface area is: "<<cyl1.SurfaceArea()<<endl;
	return 0;
}