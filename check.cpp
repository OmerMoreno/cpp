#include <stdio.h>
int main()
{
/* this program gets three numbers and prints the greatest number oof the three 
	while (true)
	{
		int a, b, c, grt;
		printf("put first number: ");
		scanf("%d" , &a);
		printf("put second number: ");
		scanf("%d", &b);
		printf("put third number: ");
		scanf("%d", &c);
		if (a > b)
			grt = a;
		else
		{
			if (b > c)
				grt = b;
			else
				grt = c;
		}
		printf("The greatest number of the three is %d \n", grt);
	}
	return 1;
*/
	int sum = 0, current, i = 0;
	while (i < 5)
	{
		printf("please put the number, this is the [%d] time you put", i+1);
		scanf("%d", &current);
		sum = sum + current;
		i = i + 1;
	}
	
	printf("you put [%d] numbers in, and their sum is [%d]", i, sum);
	return 1;
}
