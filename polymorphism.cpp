#include <iostream>
#include <string> 
using namespace std;

class RestaurantOrder {
public:
    void placeOrder(string itemName) {
        cout << "Order confirmed: " << itemName << endl;
    }
    
    void placeOrder(string itemName, int quantity) {
        cout << "Order confirmed: " << quantity << " " << itemName << "(s)" << endl;
    }

    void placeOrder(string itemName, int quantity, bool takeout) {
        cout << "Order confirmed: " << quantity << " " << itemName << "(s) ";
        if (takeout)
            cout << "for Takeout" << endl;
        else
            cout << "for Dine in" << endl;
    }
}; 
int main() {
    RestaurantOrder order;
    order.placeOrder("Burger");
    order.placeOrder("Pizza", 2); 
    order.placeOrder("Pasta", 3, true); 

    return 0;
}