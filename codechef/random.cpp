#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=0,num;
	int lower = 1;
	int upper;
	
	scanf("%d",&n);
	upper = n;
	num = (rand() % (upper - lower + 1)) + lower;
	printf("%d\n",num);
	return 0;
}
