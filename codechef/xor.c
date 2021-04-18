#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>

int main(){
	
	
	int i=0;
	int temp = 0;
	int num = 0;
	int A = 0, B= 0;
	int test = 0;

	scanf("%d", &test);
	while(test--){
		
			// printf("Enter a number : ");
			scanf("\n%d",&num);
			i = 0;
			temp = num;
			while(temp>0){
				
				temp = temp /2 ;
				i++;	
		 	}
		 	
			A = pow(2, i-1)- 1;
			B = A^num;
			
			printf("%d\n",A*B);
	}
	
		
			
		
		
	// }
	
}
