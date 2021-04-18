#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>
int totalitems=4;


int main(){
	
	// need to calculate the prices and need to get the maximum no of omelette, Milkshakes and Chocolate cakes
	int o=0, m=0, c=0;
	int price=0, min = 1;
	int po=0, pm=0, pc=0; // will be fetched from scanf
	int i, j , k;
	int eggs=0, chocolates=0; // will be fetched from scanf
	int temp=0, temp1=0;
    int max_omelettes=0, max_milkshakes=0, max_cakes=0;
	int tests = 0;
	int maxitem = 0;
	// let's fetch some information
	scanf("%d",&tests);
	
	while(tests--){
		
		max_omelettes= max_milkshakes = max_cakes = maxitem = 0;
		min = 1000001;
		scanf("\n%d %d %d %d %d %d", &totalitems, &eggs, &chocolates, &po,  &pm, &pc);
	
		temp = eggs;
		while(temp>2){
			// printf("IN");
			max_omelettes++;
			temp = temp - 2;
		}
	
		o = max_omelettes;
		
		temp = chocolates;
		
		while(temp>3){
		
			max_milkshakes++;
			temp= temp - 3;
		}
	
		m = max_milkshakes;
	
		temp = eggs;
		temp1 = chocolates;
	
		while(temp>1 && temp1>1){
		
			max_cakes++;
			temp--;
			temp1--;
		}
	
		c = max_cakes;
    	
    	// printf( "%d  %d %d  %d  %d\n", o, c, m, totalitems, min);
    	
    	if(o>m){
    		if(o>c){
    			maxitem= o;
			}
			else{
				maxitem = c;
			}
		}
		else{
			if(m>c){
				maxitem = m;
			}
			else{
				maxitem =c;
			}
		}
		if(totalitems > maxitem){
    		min = -1;
		}
		else {
			
	    	for(i=0; i<=o; i++){
	        	for(j=0; j<=m; j++){
	            	for(k=0; k<=c; k++){
	                
	                	price = (i*po)+(j*pm)+(k*pc);
	               
	               		if( ( i+j+k )== totalitems){
	               			if(price < min && price > 0 ){
	                    		min = price;
	               			}
	               		}
	                
	                
	                // printf( "%d  %d %d  : %d  %d\n", i, j, k, price, min);
	                }
	        	}
	    	}
		}
    
    	printf("price : %d\n", min);
		
	}
	
}
