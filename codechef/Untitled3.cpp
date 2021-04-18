#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>
#include<string.h>


int main(){
	
	int number;
	int factors[1000001];
	int test=0;
	int i=0, j=0;
	int flag=0;
	
	scanf("Test : %d", &test);
	
	while(test--){
	
			scanf("Num : %d",&number);
			j=0;
			for(i=1; i<=number; i++){
				if(number%i == 0 ){
					factors[j] = i;
					printf("%d",factors[j]);	
				}
				
				
			}
			
			
	}
	
	
}
