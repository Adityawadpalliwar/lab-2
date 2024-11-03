#include<stdio.h>
int main()
{
	int d;
	printf("enter the day  number: ");
	scanf("%d",&d);
	
	if (d==1)
		printf("the day is monday");
		
	else if (d==2)
		printf("the day is tuesday");
	else if (d==3)
		printf("the day is wednesday");
	else if (d==4)
		printf("the day is thursday");
	else 	if (d==5)
		printf("the day is friday");
	else	if (d==6)
		printf("the day is sateday");
	else if (d==7)
		printf("the day is sunday");
		
	return 0;
}
