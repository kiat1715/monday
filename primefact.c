// WACP to find out prime factors of a number

#include<stdio.h>
void pfact(int);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	pfact(num);
	return 0;
}

void pfact(int num)
{
	int n;
	for(n=2; num!=1; n++)
		while(num%n==0)
		{
			printf("%d",n);
			num=num/n;
		}
}
