#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main()
{
	int date, month, i, j, day,dayCount = 0;
	scanf_s("%d %d", &date, &month);
	
	for (i = 1; i <= 12; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			day = 31;
		}
		else if (i == 2)
		{
			day = 29;
		}
		else
		{
			day = 30;
		}

		for (j = 1; j <= day; j++) 
		{
			dayCount += 1;
			if (i == month && j == date) 
			{
				if (dayCount % 7 == 1)
				{
					printf("Wednesday");
				}
				else if (dayCount % 7 == 2)
				{
					printf("Thursday");
				}
				else if (dayCount % 7 == 3)
				{
					printf("Friday");
				}
				else if (dayCount % 7 == 4)
				{
					printf("Saturday");
				}
				else if (dayCount % 7 == 5)
				{
					printf("Sunday");
				}
				else if (dayCount % 7 == 6)
				{
					printf("Monday");
				}
				else if (dayCount % 7 == 0)
				{
					printf("Tuesday");
				}
				break;
			}
		}
	}
	return 0;
}
