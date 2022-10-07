/*
Design Patterns: Bridge 
2022, David Ghasimi
*/

#include <iostream>

void print(std::string str) {std::cout << str << std::endl;};

// Implementer
class Shape 
{
public:
    virtual std::string draw() {return "Shape";};
};

// Concrete Implementer
class Circle: public Shape 
{
public:
    std::string draw() {return "Circle";};
};

// Concrete Implementer
class Rectangle : public Shape 
{
public:
    std::string draw() {return "Rectangle";};
};

// Abstract
class Display
{
protected:
    Shape* _shapePointer;
public:
    Display(Shape* shapePointer): _shapePointer(shapePointer){};
    virtual ~Display(){
        delete _shapePointer; 
        print("Display deletes _shapePointer");
    };
    virtual std::string shapeDrawer() const = 0;
};

// Refined Abstract
class ColorDisplay : public Display
{
public:
    ColorDisplay(Shape* shapePointer) : Display(shapePointer){};
    std::string shapeDrawer() const 
    {
        return "ColorDisplay " + _shapePointer->draw();
    };
};

// Client
void client(Display& display)
{
    print("Display draws a " + display.shapeDrawer());
};

int main() {
    
    // Implementer: A base class pointer that points to a Concrete Implementer
    Shape* shapePointer = new Circle();
    
    // Refined Abstract class
    ColorDisplay colorDisplay(shapePointer);
    
    // Client
    client(colorDisplay);
    
    return 0;
}
