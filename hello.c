#include<stdio.h>

void microkernel_sendmsg(char *);
//I loved to make this change #stage_30
void main(){
	printf("Helloworld!\n");
	printf("This must be a monolithic design\n");
	microkernel_sendmsg("is more portable");
}

void microkernel_sendmsg(char *a){
	printf("microkernel: %s\n", a);
}
