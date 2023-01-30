#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Solid {
public:
	virtual double GetVolume() = 0;
	virtual double GetSurface() = 0;
};

class Box :Solid {
private:
	double width;
	double height;
	double depth;

public:
	Box(
		double width,   //•
		double height,  //‚‚³
		double depth) { //‰œs
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	double GetWidth() {
		return width;
	}
	double GetHeight() {
		return height;
	}
	double GetDepth() {
		return depth;
	}
	double GetVolume() {
		return width * height * depth;
	}
	double GetSurface() {
		return (width * height + height * depth + depth * width) * 2;
	}
};
class Cylinder :Solid {
private:
	double radius;
	double height;

public:
	Cylinder(
		double radius,   //”¼Œa
		double height) { //‚‚³

		this->radius = radius;
		this->height = height;
	}
	double GetRadius() {
		return radius;
	}
	double Getheight() {
		return height;
	}
	double GetVolume() {
		return M_PI * radius * radius * height;
	}
	double GetSurface() {
		return 2 * M_PI * radius * (height + radius);
	}
};
class Cone :Solid {
private:
	double radius;
	double height;

public:
	Cone(
		double radius,   //”¼Œa
		double height) { //‚‚³
		this->radius = radius;
		this->height = height;
	}
	double GetRadius() {
		return radius;
	}
	double Getheight() {
		return height;
	}
	double GetVolume() {
		return M_PI * radius * radius * height / 3;
	}
	double GetSurface() {
		double L = radius * radius + height * height;
		return M_PI * radius * (sqrt(L) + radius);
	}
};
class Sphere :Solid {
private:
	double radius;

public:
	Sphere(
		double radius) { //”¼Œa
		this->radius = radius;
	}
	double GetRadius() {
		return radius;
	}
	double GetVolume() {
		return 4 / 3 * M_PI * radius * radius;
	}
	double GetSurface() {
		return 4 * M_PI * radius * radius;
	}
};

int main()
{
	Box box{ 3,5,2.5 };
	cout << "box‚Ì‘ÌÏ=" << box.GetVolume() << endl;
	cout << "box‚Ì•\–ÊÏ=" << box.GetSurface() << endl;
	Cylinder cylinder{ 3,5 };
	cout << "cylinder‚Ì‘ÌÏ" << cylinder.GetVolume() << endl;
	cout << "cylinder‚Ì•\–ÊÏ" << cylinder.GetSurface() << endl;
	Cone cone{ 3,5 };
	cout << "cone‚Ì‘ÌÏ" << cone.GetVolume() << endl;
	cout << "cone‚Ì•\–ÊÏ" << cone.GetSurface() << endl;
	Sphere sphere{ 3 };
	cout << "sphere‚Ì‘ÌÏ" << sphere.GetVolume() << endl;
	cout << "sphere‚Ì•\–ÊÏ" << sphere.GetSurface() << endl;
}