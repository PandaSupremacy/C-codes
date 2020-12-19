#include<stdio.h>

//function for calculating F1
float F1(float x)
{
	float func=(x*x*x)-14*(x*x)+35*x+50;
	return func;
}
//Function for Bisection method

void F1roots(float a,float b)
{
	float c;
	while(F1(a)*F1(b)<0)
	{
		if(abs(b-a)<0.01)
		{
		printf("the root is %f",b);
		break;
	    }
	    else
	    {
	    c=(a+b)/2;
	    if(F1(c)==0)
	    {
	    printf("the root is %f",c);
	    break;
	    }
		if(F1(c)*F1(a)>0)
			a=c;
		else
			b=c;
		}
	
	}
	
}
void main()
{
	printf(" F1=x^3-14x^2+35x-50/n");
	printf("Between interval [-15,10]");
	F1roots(-15.0,-10.0);
	
}
