#include <stdio.h>
#include <compare.h>

void main()
{
	int a, b, max;
	a = 5;
	b = 10;
	max = compare(a, b);
	print("the max is: %d",max);
}

