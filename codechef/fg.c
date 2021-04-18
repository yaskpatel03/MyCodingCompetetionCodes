#include<stdio.h>
int main(){
    int t;
    int i,x;
    
    scanf("%d",&t);
    while(t--){
    
        for(i=1;i<=2000;i++){
            printf("%d\n",i*i);
            fflush(stdin);
            scanf("%d",&x);
            if(x==1)
                break;
        }
    }
    return 0;
}