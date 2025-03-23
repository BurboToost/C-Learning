#include <stdio.h>

int main()
{
    // continue = skips rest of the code & forces the next literation of the loop
    // break = exists a loop/switch

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            //continue; // skip the code
            break; //skips entirely
        }
        printf("%d\n", i);
    }

    return 0;
}