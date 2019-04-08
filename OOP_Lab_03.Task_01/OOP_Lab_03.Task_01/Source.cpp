#include <iostream>
#include <cmath>

//8

using namespace std;
const double pi = 3.14159265;

class Cone {

private:
	double *radius;
	double *height;

public:
	double volume();
	double rad();
	double hei();
	int Data1();
	int Data2();
	double Average();
	double x;



	Cone() { *radius = *height = 0; }

	Cone(double r, double h)
	{
		this->radius = new double(r);
		this->height = new double(h);
	}

	void SetRadius(double *r)
	{
		*radius = *r;
	}

	void SetHeight(double *h)
	{
		*height = *h;
	}


	double GetRadius()
	{
		return *radius;
	}


	double GetHeight()
	{
		return *height;
	}

	double Area()
	{
		double l = sqrt(*height*(*height) + *radius * (*radius));
		x = pi * (*radius)*(*radius + l);
		return pi * (*radius)*(*radius + l);
	}


	~Cone();

};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	


	//cout << "Площа поверхні: " << c1.area() << endl;
	//cout << "Об'єм: " << c1.volume() << endl;

	Cone** cones = new Cone*[4];
	cones[0] = new Cone(3, 7);
	cones[1] = new Cone(2, 5);
	cones[2] = new Cone(1, 1);
	cones[3] = new Cone(8, 2);

	double v1 = cones[0]->volume();
	double v2 = cones[1]->volume();
	double v3 = cones[2]->volume();
	double v4 = cones[3]->volume();


	double r1 = cones[0]->rad();
	double r2 = cones[1]->rad();
	double r3 = cones[2]->rad();
	double r4 = cones[3]->rad();


	double h1 = cones[0]->hei();
	double h2 = cones[1]->hei();
	double h3 = cones[2]->hei();
	double h4 = cones[3]->hei();

//	double radius();

	cout << "Об'єм1: " << v1 << endl;
	cout << "Об'єм2: " << v2 << endl;
	cout << "Об'єм3: " << v3 << endl;
	cout << "Об'єм4: " << v4 << endl;

	int n = 4;
	int k = 0, i = 0;
	int a = 0;

	for (k = 1; k < n; k++)
		for (i = 0; i < n - k; i++);
	
	if (cones[i] > cones[i + 1])
	{
		a = cones[i];
		cones[i] = cones[i + 1];
		cones[i + 1] = a;

		for (i = 0; i < n; i++)
			cout << cones[i] << endl;
	}

	delete cones[0];
	delete cones[1];
	delete cones[2];
	delete cones[3];
	delete[] cones;

	double v;
	v = (v1 + v2 + v3 + v4) / 4;
	cout << "Середній об'єм" << v << endl;

	double r;
	r = (r1 + r2 + r3 + r4) / 4;
	cout << "Середній радіус" << r << endl;

	double h;
	h = (h1 + h2 + h3 + h4) / 4;
	cout << "Середня висота" << h << endl;

	getchar();
	return 0;

}

double Cone::volume()
{
	return (pi * (*radius)*(*radius)*(*height) / 3.0);
}

double Cone::rad()
{
	double rad;
	scanf_s("%d", rad);
	return (rad);
}


double Cone::hei()
{

	double hei;
	scanf_s("%d", hei);
	return (hei);

}

int Cone::Data1()
{
	int k1;
	cout << "Введіть номер конуса 1" << endl;
	cin >> k1;
	return k1;
}

int Cone::Data2()
{
	int k2;
	cout << "Введіть номер конуса 2" << endl;
	cin >> k2;
	return k2;
}

double Cone::Average()
{
	double v;
	v = (v1 + v2 + v3 + v4) / 4;
	return v;
}

double operation(Cone** cones)
{

	// хотів замість 0 та 1 передавати k1 та k2 

	if (cones[0]->volume() > cones[1]->volume())
		return 1;

	if (cones[0]->volume() < cones[1]->volume())
		return 0;

	if (cones[0]->volume() == cones[1]->volume())
		return 1;
}

double operation( double h1, double h2)
{
	return h1 + h2;
}

double operation(double r1, double r2)
{
	
	return r1 + r2;
}

