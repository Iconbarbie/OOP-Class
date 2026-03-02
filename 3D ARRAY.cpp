#include <iostream>
using namespace std;

int main() {
    int marks [2][2][3] = {
	{	{1,2,3},{4,5,6}},
		{	{10,20,30},{40,50,60}}
	};
    for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			for (int k=0;k<3;k++)
			cout<<marks[i][j][k]<<endl;
		}
	}
	return 0;
}