#include<stdio.h>
int main ()
{
	int z=20;
	int x=10;
	int temp;
	printf(" z is %d , x is %d \n" ,z,x);
	
	printf("before swapping\n");
	temp=x;
	z=x;
	x=temp;
	printf("z is %d , x is %d \n", x, temp);
	
	return 0;
	 
	
	
	
	
	
	
}
