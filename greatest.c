#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("%d is greatest among all the numbers",a);
	else if (b>c && b>a)
		printf("%d is greatest among all the numbers",b);
	else if (c>a && c>b)
		printf("%d is greatest among all the numbers",c);
	
	return 0;
}
