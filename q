#include <stdio.h>
int mian()
{
	int num;
	printf("enter the integer:");
	scanf("%d",&num);
	if(num % 2 == 0)
		printf("%d is odd",num);
	else
		printf("%d is even",num);
	return 0;
}
