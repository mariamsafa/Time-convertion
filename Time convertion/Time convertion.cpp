//time convertion
#include<stdio.h>
int main()
{
	int second, minute, hours;
	scanf_s("%d", &second);
	if (second < 60)
	{
		printf("0:0:%d\n", second);	
	}
	else if(second < 3600)
	{
		minute = second / 60;
		second = second % 60;
		printf("0:%d:%d\n", minute, second);
	}
	else
	{
		hours = second / 3600;
		second = second % 3600;
		minute = second / 60;
		second = second % 60;
		printf("%d:%d:%d\n", hours, minute, second);
	}
	return 0;
}
/*
#include <stdio.h>
int main()
{
 int seconds;
 scanf("%d", &seconds);
 int hours = seconds / 3600;
 seconds = seconds - (hours * 3600);
 int minutes = seconds / 60;
 seconds = seconds - (minutes * 60);
 printf("%d:%d:%d\n", hours, minutes, seconds);
 return 0;
}

 // days to year,month,days
 #include<stdio.h>
int main() {
	int year, month, days;
	scanf_s("%d", &days);
	year = days / 365;
	days = days % 365;
	month = days / 30;
	days = days % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);
	return 0;
}

*/