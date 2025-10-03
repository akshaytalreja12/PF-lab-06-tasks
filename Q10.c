#include <stdio.h>
int main(){

float a , b , c,d; 
printf("enter the number : ");
scanf("%f",&a);
printf("enter the length of table from 1 to ");
scanf("%f",&c);
for(b=1;b<=c;b++){
	d =a*b;
	printf(" %.1f * %.1f = %.1f\n",a,b,d); 
}
return 0;
}
