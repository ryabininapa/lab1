#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


double x = 1;
double result;

void f2()
{
    result = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
}
