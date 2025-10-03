#include <stdio.h>
int main(){
	 #define PIN 1233
	 int a,b;
	 printf("Welcome!!!");
	 for(a=0;a!=PIN;){
	 	b++;
	printf("\n\nEnter the PIN Code ");
	 scanf("%d",&a);
	 if (a==PIN)
	 break;
	 	printf("Try again!");
	 	
	 }
	 printf("You Tried %d times to get it correct .",b);
}
