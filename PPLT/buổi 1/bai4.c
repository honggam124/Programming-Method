#include <stdio.h>
#include <math.h>
int main()
{
	//khai bao bien
	int day,week,year,days;
	
	//input
    printf("nhap so ngay: ");
	scanf("%d",&day);
	
	//tính toán 
    if (day<365) 
	{
	    week = day/7;
		days = day % 7;
		printf("co %d tuan va %d ngay", week, days);//output
  	} else 
	{
		year = day/365;
		week = (day - 365*year) /7;
	    days = day - year*365 - week*7;
		printf("co %d nam, %d tuan, %d ngay", year, week, days);//output
	}
	return 0;
}
	
	