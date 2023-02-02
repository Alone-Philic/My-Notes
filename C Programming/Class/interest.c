#include <stdio.h>
int main()
{
	float p,n,r,interest;
	printf("\n Enter principle amount:");
	scanf("%f",&p);
	printf("\n No. of years:");
	scanf("%f",&n);
	printf("\n Rate of Interest:");
	scanf("%f",&r);
	interest=(p*n*r)/100;
	printf("\n Simple Interest=%f",interest);
	return 0;
}	
