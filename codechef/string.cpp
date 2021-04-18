/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int tests;
	int n, k;
	char sub[1000000], mainstring[1000000];
	int flag=0;
	int i,j,k1;
	char a1 = '*';
	
	scanf("%d",&tests);
	
	while(tests--){
   	
    	flag = -1;
    	scanf("%d %d\n",&n,&k);
    	gets(mainstring);
       
    	for(i=0; i<n; i++){
    		
    		k1=0;
    		
			for(j=i; k1<k; j++){
                
				if( mainstring[j] == '*' ){
					printf("YES");
                    flag++;
                }
                k1++;
            }
			
			if(flag==k){
				printf("YES");
				break;
			}  
			else{
				continue;
			}
			  
   		}
   		
   		if(flag==k){
   			printf("YES");
		}
		else
			printf("NO");
      
   }
   
 
}

