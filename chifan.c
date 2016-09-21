#include <stdlib.h>
#include <stdio.h>

int main(){
	
	time_t t;
   
	/* Intializes random number generator */
	srand((unsigned) time(&t)); 
   
	int i = rand();
	switch( printf("i = %d\n",i), i%5){
		case 0:
			printf("noodle gogo\n");
			break;
		case 1:
			printf("burger king\n");
			break;
		case 2:
			printf("noodle yuan\n");
			break;
		case 3:
			printf("five guys\n");
			break;
		case 4:
			printf("pop eye\n");
			break;
	}
	
	return 0;
}