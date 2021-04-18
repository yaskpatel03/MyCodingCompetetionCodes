#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>

int main(){
	
	int tests;
	int number =0;
	int factors[1000001];
	int flag=1;
	int i=0, j=0;
	int ans=-1;
	
	scanf("%d",&tests);
	while(tests--){
		j=0;
		scanf("\n%d\n",&number);
		
		if(number<1000000 && number>1){
		    
		    for(i=1; i<=number; i++){
            
                if(number%i==0   ){
                
                    factors[j++] = i;
                    // printf("\t%d",i);
                    flag++;
                }
		    }

		    if(flag%2==0){
		        ans = 1;
		        printf("\n%d",ans);
		    }
		    else{
		        ans = 0;
		        printf("\n%d",ans);
		    }
		}
		else{
		    printf("\n%d",ans);
		}
		
		
		
	}
	
	return 0;
}
