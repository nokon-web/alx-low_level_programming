#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
 *
 *
 *
 *
 */
int main(void)

{

 	int a;
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        a = n % 10;
        if (a > 5)
                printf("last digit of %d is %d and greater than 5", n, a);
        else if (a == 0)
                printf("last digit of %d is %d and is 0", n, a);
        else
                printf("the last digit of %d is %d and is less than 6", n, a);
        return (0);
}
