#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators = || (OR) checks if at least one condition is true

    float temp;
    printf("\nEnter the temperature : ");
    scanf("%f", &temp);

    bool sunny = false;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    //else if(temp >= 30){
    //    printf("\nThe weather is bad!");
    // }
    else{
        printf("The weather is good!");
    }

    return 0;
}