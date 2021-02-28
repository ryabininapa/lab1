#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "../../task6_func/task6_func/task6_func.cpp"
using namespace std;

void main()
{
    cout << "x = " << x << endl;
    f2();
    cout << "f(x) = " << fixed << setprecision(4) << result << endl;
    cout << "x = ";
    cin >> x;
    f2();
    cout << "\nf(x) = " << fixed << setprecision(4) << result << endl;
}