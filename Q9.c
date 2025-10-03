#include <stdio.h>
#include <math.h>
int main(){
	int a,b=0,c=0,d=0,e,f;
	printf("Welcone To Armstrong Number checker system \n Enter the number : ");
	scanf("%d",&a);
	e=a;
	f=e;
		for(c=0;a>0;){
		a=a/10;
		c++;
}
	while (e>0){
		b=e%10;
		e=e/10;
		d = d+ (pow(b,c));
	}
	
	if (f==d){
		printf("\nThe number %d is armstrong number ",f);
	}
	else {
		printf("\nThe number %d is not Armstrong Number ",f);
	}
	return 0;
}
