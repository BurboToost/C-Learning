#include <stdio.h>
#include <string.h>//gives no new line in fgets

int main(){

    char name[25];//bytes   
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name);//reads upto white spcae
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';


    printf("\nHow old are you?");
    scanf("%d", &age);


    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old\n", age);


    return 0;
}