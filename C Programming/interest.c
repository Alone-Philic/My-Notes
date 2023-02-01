#include <stdio.h>
int main()
{
	int p,n;
	float r,si;
	
	printf("Enter values of p,n,r");
	scanf("%d%d%f",&p,&n,&r);
	
	si=p*n*r/100;
	printf("%f\n",si);
	return 0;
}		

//This code is a simple C program that calculates the simple interest (SI) of an investment.//
//The program takes three inputs from the user: the principal amount (p), the number of years (n),//
//and the interest rate (r). It then calculates the simple interest using the formula SI = p * n * r / 100 and prints the result.//
//Note that the scanf statement uses the format specifier %d for the first two variables (p and n) because they are integers,//
//and %f for the last variable (r) because it is a floating-point number.//
