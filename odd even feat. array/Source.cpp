#include<stdio.h>
int main()
{
	int num[5];
	printf("Enter first number : ");
	scanf_s("%d", &num[0]);
	printf("Enter second number : ");
	scanf_s("%d", &num[1]);
	printf("Enter third number : ");
	scanf_s("%d", &num[2]);
	printf("Enter forth number : ");
	scanf_s("%d", &num[3]);
	printf("Enter fifth number : ");
	scanf_s("%d", &num[4]);
	int i = 0;
	while (i <= 4)
	{
		if (num[i] % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
		i++;
	}
	return 0;
}