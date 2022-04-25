// Program to find a given number is palindrome or not

#include<stdio.h>

int reverse(int);       //Function Prototype
int palindrome(int);
int main(void)
{
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if((palindrome(num)))
			printf("Number is a palindrome\n");
			else
			printf("Number is not a palindrome\n");
        return 0;
}

int palindrome(int num)
{
	if(num==reverse(num))
		return 1;
	return 0;
}

int reverse(int n)
{
        int rev=0;
        do
        {
                rev = rev*10+n%10;
                n/=10;
        }
        while(n>0);
        return rev;
}
