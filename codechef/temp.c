#include <stdio.h>

int local_var=0;
int local_var1=90;

void sum(){
		
	int local_var1 =0;
	local_var1 = 5;
	printf("local : %d\n", local_var1);
}

int main(){
	
	int local_var1 = 10;	
	sum();
	printf("main : %d", local_var1);
}
