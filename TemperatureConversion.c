#include <stdio.h>
#include <ctype.h>


int main(){


    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C) : ");
    scanf("%c", &unit);

    unit= toupper(unit);// for upper and lower case of F and C

    if(unit == 'C'){
        printf("Enter the temp in Celcius : ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nTemp in Farenheit is : %.1f", temp);

    }
    else if(unit == 'F'){
        printf("Enter the temp in Farenheit : ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nTemp in Farenheit is : %.1f", temp);

    }
    else{
        printf("\n %c is not a valid unit of temperature measurement!");

    }
return 0;

}
