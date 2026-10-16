#include <stdio.h>

int main() {
  int a;
int b;
int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
	int max=a;	
	if(b>a){
	max=b;
	}	
    if(c>max){
		max=c;
	}
	printf("%i\n",max);
  return 0;
}