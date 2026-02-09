// Functios to return simple interest
#include <iostream>
#include <math.h>
using namespace std;

// function prototype
  float simpleinterest(float principal, float rate, int time);
  
  
  float compound_interest(int principal,int time, float rate, int frequency);
  
  // function definition
	float simpleinterest(float principal, float rate, int time){
		return principal * rate/100 * time;
	}
	
//function definition comound interest

	float compoundinterest(float principal, float rate, int time, int frequency){
		return principal * pow (1 + (rate/100)/frequency), (frequency*time));
	
		
	
		
		
	}
  
int main() {
	float C_I, S_I, principal, rate, time, frequency;
	
	cout<< "Enter principal:"<<endl;
	cin>>principal; 
	
	cout<< "Enter rate:"<<endl;
	cin>>rate;
	
	cout<< "Enter time:"<<endl;
	cin>>time; 
	
	cout<< "Enter frequency:"<<endl;
	cin>>frequency;   
	

	
	
	

	
	cout<<"simpleinterest is :"<<S_I<<endl;
	cout<<"compoundinterest is :"<<C_I<<endl;
	

}

