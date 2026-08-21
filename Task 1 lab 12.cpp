#include <iostream>
#include <string>

using namespace std;

const float PI = 3.14159f;

class Shape {
protected:
    string shapeName;
    float side;
public:
    Shape(string name, float s = 0.0f) : shapeName(name), side(s) {}

    virtual float calculateArea() {
        return 0.0f;
    }

    virtual void describe() {
        cout << "I am a Shape Called: " << shapeName << endl;
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(string name, float r) : Shape(name, r), radius(r) {}

    float calculateArea() override {
        return PI * radius * radius;
    }

    void describe() override {
        Shape::describe();
        cout << "Type: Circle | Radius: " << radius << endl;
    }
};
class Rectangle : protected Shape {
private:
    float length;
    float width;
public:
    Rectangle(string name, float l, float w) 
        : Shape(name), length(l), width(w) {}

    float calculateArea() override {
        return length * width;
    }

    float getArea() {
        return calculateArea();
    }

    void describe() override {
        Shape::describe();
        cout << "Type: Rectangle | Length: " << length << " | Width: " << width << endl;
    }
};
class Triangle : private Shape {
public:
    Triangle(string name, float s) : Shape(name, s) {}

    float calculateArea() override {
        return 0.5f * side * side;
    }

    float getArea() {
        return calculateArea();
    }
};

int main() {
    Circle c("MyCircle", 5.0f);
    Rectangle r("MyRectangle", 6.0f, 4.0f);
    Triangle t("MyTriangle", 6.0f);
    c.describe();
    cout << "Circle Area : " << c.calculateArea() << endl << endl;
    r.describe();
    cout << "Rectangle Area : " << r.getArea() << endl << endl;
    cout << "Triangle Area : " << t.getArea() << endl << endl;
    cout << "=== Mode Observation ===" << endl;
    cout << "Public   : calculateArea() callable directly from main." << endl;
    cout << "Protected: hidden from main — accessed via getArea() wrapper." << endl;
    cout << "Private  : hidden from main — accessed via getArea() wrapper." << endl;

    return 0;
}
