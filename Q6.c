#include <stdio.h>
int main(){
	int a,c=0,d=0;
	for (a=0;a<=20;a++){
		if (a%2==0){
		c= c+a;
		}
		else {
			d= d+a;
		}
	}
	printf("The sum of even numbers from 1 to 20 = %d\n",c);
	printf("The sum of odd numbers from 1 to 20 = %d\n",d);
	
// for sum to n numbers 
	int n,o=0,i ,j=0;
	printf("\n\nFor sum of even and odd from 1 to n number");
	printf("\nEnter the number to get sum of even and odd from 1: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if (i%2==0){
		j= j+i;
		}
		else {
			o= o+i;
		}
	}
	printf("The sum of even = %d",j);
	printf("\nThe sum of odd = %d",o);
	
	
}
