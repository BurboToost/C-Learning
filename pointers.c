#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old. ", *pAge);
}

int main()
{
/*  pointers = a variable-like reference tjat holds a memory address to another variable, array etc
    some tasks are eary to perform with pointers
    * = indirection operator ( value at address)
*/

    int age = 21;
    int *pAge = &age;

    //printf("address of age = %p\n", &age);
   // printf("value of pAge = %p\n", pAge);

   // printf("size of age: %d bytes\n", sizeof(age));
    //printf("size of pAge: %d bytes\n", sizeof(pAge));

   // printf("value of age = %d\n", age);
   // printf("value at stored address = %d\n", *pAge);// dereferencing

    printAge(pAge);

    return 0;
}


