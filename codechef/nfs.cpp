#include <stdio.h>
#include <math.h>

int main(){
	
	int tests; // tests  < 10
	
	int U, V, A, S;
	int Vcal=0;
	
	
	scanf("%d",&tests);
	
	while(tests){
		
		scanf("%d %d %d %d",&U,&V,&A,&S);
		
		Vcal = sqrt( ( (U*U)-(2*A*S)));
		
		printf("%d",Vcal);
		if(Vcal <= V){
			printf("Yes \n");
		}	
		else{
			printf("No \n");
		}
			
	}
	
	return 0;
}
