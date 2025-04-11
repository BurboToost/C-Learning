#include<stdio.h>

int main()
{
    /* memory = an array of bytes wihin RAM (street)
       memory block =  a single unit (byte) within memory, used to hold some value (person)
       memory address = the address of where a memory block is located (house address)
    
    */

    /*char a = 'X';
    char b = 'Y';
    char c = 'Z';*/

    char a;
    char b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    //printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    //printf("%p\n", &c);

    

    return 0; 
}