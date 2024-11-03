#include<stdio.h>
int main(){
	int basic,da,hra;
	printf("enter your basic salary : ");
	scanf("%d",&basic);
	
	da= basic*50/100;
	hra= basic*10/100;
	
	printf("your total salary is %d", basic+da+hra);
	return 0;
}



