#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>

int main(){
	
	int w1=0;
	int w2 = 0;
	int x1 = 0;
	int x2 = 0, M= 0;
	int test = 0;
	int ans = 0;
	
	scanf("%d", &test);
	while(test--){
	
			scanf("\n%d %d %d %d %d",&w1,&w2,&x1,&x2,&M);
			ans =0;
			if( (w2-w1)>= (x1*M) && (w2-w1)<= (x2*M) ){
				ans = 1;
				printf("\n%d",ans);
			}
			else{
				ans = 0;
				printf("\n%d",ans);
			}
			
	}
	
	
}
