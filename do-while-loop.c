#include <stdio.h>

int main()
{
    // while loop = checks a condition, Then executes a block of code if condition is true
    // do while loop = always executes a block of code once, Then checks the condition

    int num = 0;
    int sum = 0;

    //printf("Enter your number : ");
    //scanf("%d", &num);

   
    do{
        printf("Enter a number avobe 0 : ");
        scanf("%d", &num);
        if(num > 0)
        {
            sum += num;
        }

    } while(num > 0);
    
    printf("Sum : %d", sum);

    return 0;
}