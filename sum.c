#include <stdio.h>

int sum(int n)
{
	return (n + 1) * n / 2;
}

int main()
{
	printf("%d \n", sum(100));
	return 0;
}	
