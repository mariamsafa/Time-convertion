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
/*#include <stdio.h>
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
}*/