#include <stdio.h>
#include <math.h>

int main(){
	
	int tests;
	int totalnum=0;
	int num[100000];
	int i, sum = 0;
	int ans =0;
	int p =0;
	int flag =0; 
	int temp = 0;
	
	scanf("%d",&tests);
	while(tests--){	
	
		scanf("%d",&totalnum);
		sum = 0;
		
		for(i=0; i<totalnum; i++){
			
			scanf("%d",&num[i]);
			
			sum = sum + num[i];
		}
		
		if(sum%2==0){
			ans = 0;
			printf("%d \n",ans);
		}
		else{
			flag = totalnum ;
			for(i=0; i<totalnum; i++){
				flag--;
				p = ceil(num[i] /2) - 1;
				if(p<0){
					p = 0;
				} 
				
				temp = num[i];
				num[i] = pow(num[i], p);
				
				sum = sum - temp + num[i];
				
				if(sum%2==0){
					printf("%d \n",i);
					break;
				}
				else if(flag==0){
					printf("%d \n",-1);
					break;
				}
			}	
			
		}
		
	
	

	}
	
			
	return 0;
}
