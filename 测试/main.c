#include<stdio.h>
#include<string.h>
void main()
{
	int a, k;
	char b[20], c[20];
	scanf_s("%s,%s", b, c);
	a = strlen(b) + 1;
	k = strlen(c) + 1;
	printf("%*s,%*s", a, b, k, c);
}