#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string c) {
        color = c;
    }

    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

class Rectangle :public  Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }

    float area() {
        return 3.142 * radius * radius;
    }
};

int main() {
    Rectangle rect(10, 5, "Red");
    Circle circ(7, "Blue");

    cout << "Rectangle Color: " << rect.getColor() << endl;
    cout << "Rectangle Area: " << rect.area() << endl;

    cout << "Circle Color: " << circ.getColor() << endl;
    cout << "Circle Area: " << circ.area() << endl;

    return 0;
}