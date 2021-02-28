#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void f2();

double x = 1;
double result;

void main()
{
    cout << "x = "<<x<<endl;
    f2();
    cout << "f(x) = " << fixed << setprecision(4) << result << endl;
    cout << "x = ";
    cin >> x;
    f2();
    cout << "\nf(x) = " << fixed << setprecision(4) << result << endl;
}

void f2()
{
    result = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}
