#include <stdio.h>
int main(){
	 #define PIN 1233
	 int a,b=0;
	 printf("Welcome!!!");
	 do {
	printf("\nEnter the PIN Code ");
	 scanf("%d",&a);
	 b++;
	 	
	 }
	 while (a!=PIN);
	 printf("\NYou Tried %d times to get it correct .",b);
}

