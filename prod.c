//WACP to find product of given numbers

#include<stdio.h>
void main()
{
	int n,prod=1,rem;
	printf(" Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		prod = prod*rem;
		n/=10
	}
	printf("Product of digits is = %d",prod);
}
