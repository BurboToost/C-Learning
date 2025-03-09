#include <stdio.h>
int main(){
    // %(format specifier) = defined and formats a type of data to be displayed
    /* %c = character
    %s = string(array of characters)
    %f = float
    %d = integer
    */


    float item1=5.75;
    float item2=10.00;
    float item3=100.99;


    printf("Item 1: $%-8.2f\n",item1);// %.1 = decimal precision
    printf("Item 2: $%-8.2f\n",item2);// %1 = minimum field width(right aligned)
    printf("Item 3: $%-8.2f\n",item3);// %- = left align--for left align use a - befeore 1 ex:%-8.2f

    return 0;
}