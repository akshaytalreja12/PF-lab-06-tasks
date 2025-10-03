#include <stdio.h>
#include <math.h>
int main(){
	int a,b,d=1,e;
	printf("Enter the number : ");
	scanf("%d",&a);
	printf("Enter the power : ");
	scanf("%d",&b);
	for(;e<=b;e++){
		d = d*a;
	}
	printf("%d to power %d = %d\n\n",a,b,d);
	// without loop 
	e = pow(a,b);
	printf("Without loop [pow (%d,%d)]= ",a,b);
	printf("%d",e);
}
