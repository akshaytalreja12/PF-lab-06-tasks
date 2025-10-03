#include <stdio.h>
char yes;
float a , b , c,d; 
int main(){

printf("enter the number : ");
scanf("%f",&a);
printf("enter the length of table from 1 to ");
scanf("%f",&c);
for(b=1;b<=c;b++){
	d =a*b;
	printf(" %.1f * %.1f = %.1f\n",a,b,d); 
}
printf("\nWant to print another table (Y/N)\n");
scanf(" %c",&yes);
if (yes=='y' || yes =='Y')
main();

return 0;
}
