#include "main.h"

f ff[] = {
	{'d', round_down}, {'u', round_up},
	{'n', round_nearest}, {NULL, NULL}
};

int _round(float x, char s)
{
	int i;

	for (i = 0; i < 4; ++i)
	{
		if (s == ff[i].c)
			return ff[i].f(x);
	}
	return (-1);
}

