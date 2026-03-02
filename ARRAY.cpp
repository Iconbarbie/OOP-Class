#include <iostream>
using namespace std;

int main() {
    int marks [5] = {20, 30, 40, 50, 60};
    int sum = 0;
    for (int i = 4; i >=0 ; i--) {
        cout << marks[i] << endl;
        sum += marks[i];
    }


    cout << "Total Sum: " << sum << endl;
    cout << "Size in bytes: " << sizeof(marks) << endl;

    return 0;
}