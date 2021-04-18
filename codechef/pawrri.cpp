#include<stdio.h>    
#include<stdlib.h> 
#include<math.h>
#include<string.h>


int main(){
	
	char mainstr[100001], resstr[100001];
	char substr[] = "party";
	char rep[] = "pawri";
	int test = 0;
	int i=0, j=0, k=0;
	int flag=0;
	
	scanf("%d", &test);
	while(test--){
	
			fflush(stdin);
			scanf("%s",&mainstr);
			// printf("\n%s %s %s", mainstr, substr, rep);
			strcpy(resstr, mainstr);
			for(i=0; i<strlen(mainstr); i++){
				
				// printf("\nLOOP %d",i);
				k=0;
				
				for(j=i; k<5; j++){
					
					if(mainstr[j] == substr[k]){
						// printf("\nIn %c",substr[k]);
						flag=1;
					}
					else{
						// printf("\nNO IN %c",substr[k]);
						flag=0;
						break;
					}
					
					k++;
					// printf("\n%c",substr[k++]);
				}
				
				
				// printf("\ndone");
				
				k=0;
				if(flag==1){
					for( j=i; k<5; j++){
							
							resstr[j] = rep[k];
							// printf("\n%c",resstr[j]);
							k++;
					}
					
				
					
				}
				
			}
			
			// printf("\ndone\n");
			printf("\n%s",resstr);
			// printf("\ndone\n");
			
	}
	
	
}
