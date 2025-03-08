#include <stdio.h>

int main(){


int x;//declaration
x = 123;//intialization
int y = 321;//declaration + initialization

int age = 21;//integer
float gpa = 2.05;// floating point number
char grade = 'C';//single character
char name[] = "Bro";//array of characters


printf("hello %s\n",name);// %s is used as a place holder s=string
printf("You are %d years old\n",age);// %d is used as a place holder d=decimal
printf("Your avg grade is %c\n",grade);// %c is used as a place holder c=character
printf("Your GPA is %f\n",gpa);// %f is used as a place holder f=float


    return 0;
}