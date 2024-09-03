#include<stdio.h>
int main()
{
	int first, second, *p,*q,sum;
	printf("enter the two integer\n");
	scanf("%d%d",&first,&second);
        p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum of enter number is = %d\n",sum);
	return 0;
}
