#include "Shape.h"

int main() 
{
    vector<Rectangle*> rectangles = { new Rectangle(4, 7), new Rectangle(6, 8),new Rectangle(3, 2) }; // width + height

    for (Rectangle* shape : rectangles) 
    {
        cout << shape->toString() << ": " << "area=" << shape->area() << ", perimeter=" << shape->perimeter() << endl;
    }

    vector<Square*> squares = { new Square(7),new Square(6),new Square(9) };

    for (Square* shape : squares) 
    {
        cout << shape->toString() << ": " << "area=" << shape->area() << ", perimeter=" << shape->perimeter() << endl;
    }

    vector<Circle*> circles = { new Circle(4.3), new Circle(5.5),new Circle(6.2) }; // radius

    for (Circle* shape : circles) 
    {
        cout << shape->toString() << ": " << "area=" << shape->area() << ", perimeter=" << shape->perimeter() << endl;
    }
}