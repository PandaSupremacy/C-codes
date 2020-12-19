#include<stdlib.h>
#include<math.h>
#include<stdio.h>

//....function to calculate the value of F(x)...

float f(float x)
{
  float value=pow(x,2)+x;
  return value;	
}
void main()
{
	//..declaring upper limit,lower limit,dx,other required variables
	
	float uplim,lowlim,dx,integral=0,h,temp=0;
	int i,n,flag=0;
	
	//taking input from the user for upper limit,lower limit and dx
	
	printf("enter the upper limit for integration");
    scanf("%f",&uplim);
    printf("enter the lower limit for integration");
    scanf("%f",&lowlim);
    printf("enter the the value of 'dx' i.e.,differentialof x ");
    scanf("%f",&dx);
    //assigning value of interval as h for convenience
    h=dx;
    //if lower limit is greater than upper limit
    if(lowlim>uplim)
    {
    	temp=lowlim;
    	lowlim=uplim;
    	uplim=temp;
    	flag=1;
	}
    //finding number of intervals
    n=(uplim-lowlim)/h;
    for(i=1;i<=n;i++)
    {
    integral=integral+0.5*h*(f(lowlim+(i-1)*h)+f(lowlim+i*h));
	}
	if(flag==1)//checking if limits have been interchanged
	printf("\nthe integral will be %.4f",integral*-1);//negative value og integral when the limits are interchanged
	else
	printf("\nthe integral will be %.4f",integral);//same value if it remains intact
}
