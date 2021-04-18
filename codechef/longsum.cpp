#include <stdio.h>

int main(){
    
    unsigned int  num;
	int N=0;
	int i=0;
	unsigned int sum=0;
	
	scanf("%d\n",&N);
	
	for(i=0; i<N; i++){
		scanf("\n%u",&num);
		
		sum = sum + num;
		printf("\tsum : %u\n",sum);
		
	}
	
	printf("%u",sum);
    return 0;
}
