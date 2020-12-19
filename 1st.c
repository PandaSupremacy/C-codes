#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//function for calculating F1
float F1(float x)
{
	float func=(pow(x,3))-14*(pow(x,2))+35*x+50;
	return func;
}
//function for calculating F2
float F2(float x)
{
    float func=pow(x,2)-12*x-805;
    return func;
}
//function for calculating F3
float F3(float x)
{
	float func=pow(x,4)-54*(pow(x,3))+1048*(pow(x,2))-8586*x+24871;
	return func;
}

//Function for calculating roots of F1

void F1roots(float a,float b)
{
	float c;
	
	    //checking if F1(a) and F1(b) have the same signs
		
		if(F1(a)*F1(b)>0)
		{
			printf("\nNo roots exist\n");
		}
		
		//Finding a root between a and b if F1(a) and F1(b) have different signs
		
	    else
	    if(F1(a)*F1(b)<0)
	    {
	    while(abs(b-a)>=0.01)
	    {
	        c=(a+b)/2;
	    if(F1(c)==0)
	    {
	        break;
	    }
		if(F1(c)*F1(a)>0)
			a=c;
		else
			b=c;
		}
		printf("\nthe root is %.2f\n",c);
	
	    }
		else
		
		//checking if one of a and b are the roots as they belong to [a,b]
		
		if(F1(a)*F1(b)==0)	
		{
			if(F1(a)==0)
			printf("\nthe root is %.2f\n",a);
			if(F1(b)==0)
			printf("\nthe root is %.2f\n",b);
			
		}
}

//Function for calculating roots of F2

void F2roots(float a,float b)
{
	float c;
	
	    //checking if F2(a) and F2(b) have the same signs
		
		if(abs(b-a)<0.01)
		{
		    printf("\nthe root is %,2f",b);
		}
		if(F2(a)*F2(b)>0)
		{
			printf("\nNo roots exist\n");
		}
		
		//Finding a root between a and b if F2(a) and F2(b) have different signs
		
	   else
	    if(F2(a)*F2(b)<0)
	    {
	    while(abs(b-a)>=0.01)
	    {
	        c=(a+b)/2;
	    if(F2(c)==0)
	    {
	        break;
	    }
		if(F2(c)*F2(a)>0)
			a=c;
		else
			b=c;
		}
		printf("\nthe root is %.2f\n",c);
	
	    }
		else
		
		//checking if one of a and b are the roots as they belong to [a,b]
		
		if(F2(a)*F2(b)==0)	
		{
			if(F2(a)==0)
			printf("\nthe root is %.2f\n",a);
			if(F2(b)==0)
			printf("\nthe root is %.2f\n",b);
			
		}
}
//Function for calculating roots of F3

void F3roots(float a,float b)
{
	float c;
	
	    //checking if F3(a) and F3(b) have the same signs
		
		if(abs(b-a)<0.01)
		{
		    printf("\n the root is %.2f\n",b);
		}
		if(F3(a)*F3(b)>0)
		{
			printf("\nNo roots exist\n");
		}
	    else
	    
		//Finding a root between a and b if F3(a) and F3(b) have different signs
		
	    if(F3(a)*F3(b)<0)
	    {
	    while(abs(b-a)>=0.01)
	    {
	        c=(a+b)/2;
	    if(F3(c)==0)
	    {
	        break;
	    }
		if(F3(c)*F3(a)>0)
			a=c;
		else
			b=c;
		}
		printf("\nthe root is %.2f\n",c);
	
	    }
		else
		
		//checking if one of a and b are the roots as they belong to [a,b]
		
		if(F3(a)*F3(b)==0)	
		{
			if(F3(a)==0)
			printf("\nthe root is %.2f\n",a);
			if(F3
			(b)==0)
			printf("\nthe root is %.2f\n",b);
			
		}
}
void main()
{   
 //Printing the roots of function 1 in the given intervals   
 
	printf(".... F1=x^3-14x^2+35x-50 ....\n");
	printf("Between interval [-15,-10]");
	F1roots(-15.0,-10.0);
	printf("Between interval [10,20]");
	F1roots(10.0,20.0);
	printf("Between interval [0,5]");
	F1roots(0,5.0);	
	printf("Between interval [-8,0]");
	F1roots(-8.0,0);
	printf("..............................\n");
	
	//Printing the roots of function 2 in the given intervals
	
	printf(".... F2=x^2-12x-805 ....\n");
	printf("Between interval [0,10]");
	F2roots(0.0,10.0);
	printf("Between interval [-50,0]");
	F2roots(-50.0,0.0);
	printf("Between interval [50,70]");
	F2roots(50.0,70.0);	
	printf("Between interval [20,40]");
	F2roots(20.0,40.0);
	printf("..............................\n");
	
	//Printing the roots of function 3 in the given intervals
	
	printf(".... F2=x^2-12x-805 ....\n");
	printf("Between interval [0,10]");
	F3roots(0.0,10.0);
	printf("Between interval [-10,0]");
	F3roots(-10.0,0.0);
	printf("Between interval [-12,-18]");
	F3roots(-12.0,-18.0);	
	printf("Between interval [25,75]");
	F3roots(25.0,75.0);
}

