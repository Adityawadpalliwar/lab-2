#include <stdio.h>

int main()
{
	int unit,sur=50,charge=10;
	printf("Enter number of units of electricity you have used : ");
	scanf("%d",&unit);
	
	printf("your electricity bill is %d",unit*charge +sur);
	return 0;
}
