#include<stdio.h>
#include<stdbool.h>

bool check_nam(int year);
bool check_all(int day, int month, int year);

void main ()
{
	int ngay,thang,nam;
	printf("Nhap ngay thang nam (dd mm yyyy..): ");
	scanf("%d%d%d",&ngay,&thang,&nam);
	if(check_all(ngay,thang,nam))
    {
		printf("\nNhap sai ngay va thang.");
	} else
    {
        printf("Thong tin hop le:");
		printf("%d/%d/%d",ngay,thang,nam);
	}
}

bool check_nam(int year)
{
	if((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
    {
		return true;
	}
	return false;
}

bool check_all(int day, int month, int year)
{
	if(month >=1 || month <= 12){
		switch(month)
        {
			case 4:
			case 6:
			case 9:
			case 11:
				if(day > 30)
					return true;
				return false;
				break;
			case 2:
				if(check_nam(year))
                {
					if(day > 29)
						return true;
					return false;
				}else
                {
					if(day > 28)
						return true;
					return false;
				}
				break;
			default:
				if(day > 31)
					return true;
				return false;
		}
		return false;
	}
	return false;
}
