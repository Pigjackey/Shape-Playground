#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Shape
{
public:
	Shape(double w, double h);
	string toString();

private:
	double width;
	double height;

};

Shape::Shape(double w, double h)
{
	width = w;
	height = h;
}

string Shape::toString()
{
	stringstream ss;
	ss << "Width: " << width << endl;
	ss << "Height: " << height << endl;

	return ss.str();
}

class Rectangle : public Shape
{

public:
	Rectangle(double w, double h, int s);
	string toString();

private:
	int sides;

};


string Rectangle::toString()
{
	//
	// Implement the Rectangle toString function
	stringstream ss;
	ss << Shape::toString() << endl;
	ss << "Sides: " << sides << endl;

	return ss.str();
}

// Use the constructor you created
// for the previous problem here
Rectangle::Rectangle(double w, double h, int s)
	:Shape(w, h)
{
	sides = s;
}
//

int main()
{
	double width;
	double height;
	const int sides = 4;

	cin >> width;
	cin >> height;

	Rectangle bob = Rectangle(width, height, sides);
	cout << bob.toString();

	system("pause");
	return 0;
}