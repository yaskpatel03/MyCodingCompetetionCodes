#include <stdio.h>

int main(){
	
	int lucky=0,unlucky=0;
	int i=0,N=0;
	int num=0;
	
	scanf("%d\n",&N);
	
	for(i=0; i<N; i++){
		
		scanf("%d",&num);
		if(num%2==0)
			lucky++;
		else
			unlucky++;
	}
	
	if(lucky<=unlucky)
		printf("NOT READY");	
	else
		printf("READY FOR BATTLE");
	
	return 0;
}
