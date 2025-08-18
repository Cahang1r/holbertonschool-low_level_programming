#include "main.h"

int main()
{
    int *x = malloc(sizeof(int));
    *x = 7;
    printf("%d\n", *x);
    free(x);
    return 0;
    

    
}