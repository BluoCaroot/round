#include "main.h"

int main()
{
	float x;

	cin >> x;
	cout << "rounding x up is: " << _round(x, 'u') << "\n";
	cout << "rounding x down is: " << _round(x, 'd') << "\n";
	cout << "rounding x to nearest is: " << _round(x, 'n') << "\n";
	cout << "example of error: " << _round(x, ' ') << "\n";
}