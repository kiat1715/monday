// WACP to find given numer is prime or not

#include<stdio.h>
#include<math.h>

int prime(int);	// Function prototype
int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(prime(num))	//Function call
		printf("Number is prime\n");
	else
		printf("Number is not prime\n");
	return 0;
}

int prime(int n)	//Fuction Definition
{
	int i;
	for(i=2; i<sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
}
