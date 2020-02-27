// jchoquestion6
// //2<F2>26<F2>20
// test 1
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (void)
{
	int i,x,value;
	float total;

	x = 0;

	for(i=0;i<11;i++)
	{	
		total = x / 20;
		x += 2;
	        printf("%.3f \n",total);
	}


	printf("%d \n",x);

}

