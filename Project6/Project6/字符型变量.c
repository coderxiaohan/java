#include<stdio.h>
int main()
{
	char c1;

	c1 = 'A';

	c1 = c1 + 32;

	printf("�ַ��ͱ���c1�����ŵ�����:%c\n", c1);

	printf("�ַ��ͱ���c1�����ŵ����ݵ�ASII:%d\n", c1);

	printf("���������ַ��ͱ���c1����%d�ֽڴ���ռ�\n", sizeof(c1));


	return 0;
}