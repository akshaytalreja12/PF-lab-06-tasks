#include <stdio.h>
int main(){
	int a,b,c,d,e;
	b=1;c=0;d=0;
	printf("Enter the number of how long series you want: ");
	scanf("%d",&a);
	for(e=0;e<=a;e++){
		printf("%d ",c);
		c = b+d;
		b=d;
		d=c;
		
	}
}
