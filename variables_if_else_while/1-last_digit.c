#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n;
    int last_digit; 

	srand(time(0));  
	n = rand() - RAND_MAX / 2;  
    int last_digit = n % 10;
    if (last_digit > 5){
        printf("last digit is greater than 5");
    }
    else if(last_digit == 0){
        printf("last digit is 0");
    }
    else {
        printf("ess than 6 and not 0");
    }
    return 0;
}