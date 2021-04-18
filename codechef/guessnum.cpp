#include <stdio.h>
#include <math.h>

int main(){
	
	int tests=0;
	int num=0;
	long int factors[1000001];
	int i=0,j=0;
	int ans=-1;
	int flag=1;
	
	scanf("%d",&tests);
	
	while(tests--){
		
		for(i=1; i<1000; i++){
			printf("%d",i*i);
			scanf("%d",&ans);
			
			if(ans==1){
				goto end;
			}
		}
		
		end:
		continue;
	}
	return 0;
}

