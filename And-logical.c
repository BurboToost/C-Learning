#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators = && (And) checks id two or more conditions are true

    float temp;
    printf("\nEnter the temperature : ");
    scanf("%f", &temp);

    bool sunny = false;

    if(temp>= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }



    return 0;
}