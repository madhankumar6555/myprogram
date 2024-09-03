#include "odd.h"
int mian()
{
	int num;
	printf("enter the integer:");
	scanf("%d",&num);
	if(num % 2 == 0)
	{
		v1();
	}
	else
	{
		v2();
	}
	return 0;
}
