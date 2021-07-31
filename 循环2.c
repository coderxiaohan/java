#include<stdio.h>
int main()
{
	int s = 0, n;

	n = 1;

	do{
		s = s + n;

		n = n + 1;
		
	   }
	while (n <= 100);


	printf("%d", s);

	return 0;
}