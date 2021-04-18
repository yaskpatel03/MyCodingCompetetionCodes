#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50][20];
    int t=0;
    char *ptr;  
    int i=0, j=0;
    int same = 0;
    int total[50];
    
    char prev = '0';
    scanf("%d",&t);
    // printf("t = %d\n", t);
    
    for(j=0; j<t; j++){
        
        scanf("%s",str[j]);
       //  printf("string = %s\n", str[j]);
        ptr = str[j];
          // printf("string = %s\n", ptr);
          
        prev = '0';
        for(i=0; ptr[i]!= '\0'; i++){
            
            // printf("Current : %c\n", (*(ptr+i)));
            if(*(ptr+i) =='1' && prev == '0'){
                
                same++;
                // printf("\nSame : %d\n", same);
            }
            
            prev = (*(ptr+i));
            // printf("prev : %c\n",prev);
        }
       // printf("same: %d\tdiff: %d\n",same,diff);
        total[j] = same;
        same = 0;
      
    }
    
    for(i=0; i<j; i++){
    	printf("%d\n", total[i]);
	}
    return 0;
}
