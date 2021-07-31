#include<stdio.h>
int main()
{
	char c1;

	c1 = 'A';

	c1 = c1 + 32;

	printf("字符型变量c1里面存放的数据:%c\n", c1);

	printf("字符型变量c1里面存放的数据的ASII:%d\n", c1);

	printf("编译器给字符型变量c1分配%d字节储存空间\n", sizeof(c1));


	return 0;
}