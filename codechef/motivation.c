#include <stdio.h>


int main(){
	
	int tests; // tests  < 10
	
	int Nmovies; // numbers of movies < 50000
	long int Xremain; // X Gb of space remaining < 1000,000,000
	
	long int S=0, R=0; // space and rating 
	
	int i=0;
	long int max=0;
	
	scanf("%d",&tests);
	
	if(tests <= 10 && tests > 0){
		
		while(tests--){
		
			scanf("%d %d",&Nmovies,&Xremain);
			max =0; 
			
			for(i=0; i<Nmovies; i++){
				scanf("%d %d",&S,&R);
				
				if(Xremain>=S){
					if(R>max){
						max = R;
					}
				}
			}
			printf("\n%d",max);
		
		}
	}
	
	
	
	return 0;
}
