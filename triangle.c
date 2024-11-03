#include<stdio.h>
int main()
{   int a ,b, c;
	printf("enter the sides of triangle : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b==c)
		printf("the given triangle is equilateral");
	else if ( a==b || b==c|| c==a )
	 	printf("the given triangle is isosceles");
	else 
		printf("the given triangle is scalene");
		
	return 0;
}
