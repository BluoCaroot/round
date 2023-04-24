#include "main.h"

int round_up(float x)
{
	int a = x / 10 * 10;
	return (a < x ? (a + 1) : a);
}
int round_down(float x)
{
	int a = x / 10 * 10;
	return (a);
}
int round_nearest(float x)
{
	int a = x / 10 * 10;
	return (x >= (a+0.5) ? (a + 1) : a);
}

