#include <stdio.h>
int main(){
	int a ,b,c,d,e;
	printf("ENter thenumber ");
	scanf("%d",&a);
	e=a;
	for (;a!=0;a=a/10)
	{
		b=a%10;
		c= c*10+b;
		
	}
		if (e==c){printf("the number %d is palindrome",e);}
	else {
	printf("the number %d is not palindrome ",e);}
	
	
	
}
