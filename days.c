#include<stdio.h>
// this program is to find number of days usings month and year
int main()
{ int m,y ;
	printf("enter the month and year: ");
	scanf("%d %d",&m,&y);
	

		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			printf("number of days= 31");
		if (m==4||m==6||m==9||m==11)
			printf("number of days = 30");
		if (m==2)
			if ((y%4==0 && y%100!=0)|| y%400==0 )
	     	{ printf("number of days = 29");
	    	}
	        else
	     	{
			printf("number of days = 28");
			}
		
		return 0;
		

	
}
