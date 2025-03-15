// we can use multiple else if in a code but its unprofessional
//so we use switch
#include <stdio.h>

int main(){

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;//  breaks help us exit out of switch  
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
          printf("You did okay!\n");
          break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("You screwed up son!\n");
            break;
        default:
            printf("Please enter only valid grades!");   
    }


    return 0;
}