#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float x;

	printf("enter marks of physics, chemistry, biology, mathematics, computer: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	x=(float)(a+b+c+d+e)/5;
	
	printf("your percentage is %d",x);
		
	if (x>=90)
		printf("you scored A grade");
	else if (x>=80)
		printf("you scored B grade");
	else if (x>=70)
		printf("you scored C grade");
	else if (x>=60)
		printf("you scored D grade");
	else if (x>=50)
		printf("you scored E grade");
	else 
		printf("you scored F grade");
	
	return 0;
	
	
} 
