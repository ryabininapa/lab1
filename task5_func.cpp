#include <cstdlib>

using namespace std;

double f(double x)
{
	double y = (((x + 2) / sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	return y;
}