#include<stdio.h>
int main()
{
	int counter =1,a,b,performance_measure,res,INS;
	counter=1;
	printf("Enter number 1:");
	scanf("%d",&a);
	counter = counter+1;
	printf("Enter number 2:");
	scanf("%d",&b);
	counter = counter +1;
	res=a  &&  b;
	counter=counter+1;
	printf("%d",res);
	counter=counter+1;
	printf("enter number of instruction:");
	scanf("%d",&INS);
	performance_measure=INS/counter;
	printf("performance_measure: %d",performance_measure);
}
	
	

