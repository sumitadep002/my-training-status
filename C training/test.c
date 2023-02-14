#include <stdio.h> 
#ifndef NUMBER   
#define NUMBER 2 
#endif
void main() {  

#if (NUMBER == 1)
printf("1 Value of Number is: %d",NUMBER);  
#else
printf("2 is value of number\n");
#endif


printf("\n");

// if (NUMBER == 1)
// printf("1 Value of Number is: %d",NUMBER);

}  