#include <stdio.h>
#include <stdlib.h>
#include <math.h>


   
int main(int argc, char *argv[]) {

	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemin a'si: ");
	scanf("%d",&a);
	
	printf("Denklemin b'si: ");
	scanf("%d",&b);
	
	printf("Denklemin c'si: ");
	scanf("%d",&c);
	
	delta= b*b - 4*a*c;
	x1= (-b + (sqrt(delta)) ) /2*a;
	x2= (-b - (sqrt(delta)) ) /2*a;
	
	printf("Denklemin kokleri: %f ve %f",x1,x2);
	

	return 0;
}
