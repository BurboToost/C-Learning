#include <stdio.h>

int main()
{
    
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF,"\nSpongebob Square pants");

    fclose(pF);
    
/*
    if(remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else{
        printf("That file was not deleted!");
    }
*/
    return 0;
}