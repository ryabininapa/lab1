#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	double x1 = 1;
	double x2;
	double f1 = (((x1 + 2) / sqrt(2 * x1)) - (x1 / (sqrt(2 * x1) + 2)) + (2 / (x1 - sqrt(2 * x1)))) * ((sqrt(x1) - sqrt(2)) / (x1 + 2));
	printf("x = 1\n");
	cout << "f(x) = " << fixed<< setprecision(4) <<f1<<endl;
	printf("x = ");
	cin >>x2;
	double f2= (((x2 + 2) / sqrt(2 * x2)) - (x2 / (sqrt(2 * x2) + 2)) + (2 / (x2 - sqrt(2 * x2)))) * ((sqrt(x2) - sqrt(2)) / (x2 + 2));
	cout << "f(x) = " << fixed << setprecision(4) << f2;
}