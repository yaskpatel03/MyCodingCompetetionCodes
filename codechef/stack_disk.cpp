#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int t,n, count, last, flag=0;
	int num;
	// printf("t:");
	scanf("%d",&t);
	last = 0;
	
	while(t--){
		
		// printf("No. of elements : N : ");
		scanf("%d",&n);
		
		int *B = (int*)calloc(n,sizeof(int));
		
		last = 0;
		flag=0;
		
		for(int i=1; i<=n; i++){
			
			scanf("%d",&num);
			flag=0;
			for(int j=1; j<=last; j++){
				
				if(i==1 & j==1){
					B[last++] = num;
					flag=1;
					// printf("\n1st : Num %d",B[last]);
					break;
				}
				else if(num < B[j]){
				
					B[j] = num;
					flag=1;
					// printf("\nless : %d",B[j]);
					break;
				}
				else
					continue;
					
			
					
			}
			
			if(flag==0){
				B[++last] = num ;
				// printf("\nno where : %d",B[last]);
			}
						
		}
		
		printf("%d",last);
		
		// printf("possible disks: ");
		for(int i=1; i<=last; i++){
			printf(" %d",B[i]);
		}
		printf("\n");
		
		
		free(B);
	
	}
	
	return 0;
}
