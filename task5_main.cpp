#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

double f(double x);

void main()
{
	double x1 = 1;
	double f1 = f(x1);
	cout << "x = " << x1 << endl;
	cout << "f(x) = " << fixed << setprecision(4) << f1 << endl;
	double x2;
	cout << "x = ";
	cin >> x2;
	double f2 = f(x2);
	cout << "f(x) = " << fixed << setprecision(4) << f2;
}