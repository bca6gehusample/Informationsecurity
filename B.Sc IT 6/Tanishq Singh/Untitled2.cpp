#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
	return ((cos(x)+1)/3);                     //+1.
}
int main()
{
	float a,b,x,d;
	int n;
	printf("enter the number of iteration");
	scanf("%d",&n);
	printf("\n n     x    i(c)");
	for(int j=0;j<n;j++)
		{
	      
			printf("\n\n%d %10.6f  %10.6f   ",j+1,x,fun(x));
			x=fun(x);
		}
		getch();
}
