#ifndef MAIN_H
#define MAIN_H

#include<iostream>
using namespace std;
int _round(float x, char s);

int round_up(float);
int round_down(float);
int round_nearest(float);


typedef struct function_type  
{
	char c;
	int (*f)(float);
	
}f;

#endif