#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
	return(cos(x)-3*x+1);                    //+1.
}
int main()
{
	float a,b,c,d,t;
	int n,x=0;
	printf("enter the number of iteration");
	scanf("%d",&n);

	while(1)
    {
    if((fun(x)*fun(x+1))<0){  break; }
    else   printf("no root found\n");
    x++;
    }
	a=x;
	b=x+1;
	
		printf("\nthe initial aprrox limit are\n");
		printf("%f%f",a,b);
		printf("\n\n a    b   c   f(c)");
		for(int j=0;j<n;j++)
		{
			c=(a+b)/2;
			printf("\n\n %10.6f  %10.6f   %10.6f    %10.6f",a,b,c,fun(c));
		if(fun(c)*fun(a)<0)
	{ b=c;}
	else
	{a=c;}
		}
		getch();
		return 0;
		}
