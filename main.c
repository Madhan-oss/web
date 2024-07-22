#include <stdio.h>

int main(){

    int age = 18;
    float gpa = 8.05;
    char grd ='A';
    char name[]="madhan";

    printf("hello %s\n",name);
    printf("hello your gpa %f\n",gpa);
    printf("hello your grade-%c\n",grd);
    printf("hello %s youe are %d and your grade - %c and GPA is %f",name,age,grd,gpa);


    return 0;
}   

/*
%c = character
%s = string array of content
%f
%1f
%d = integer


%.1 = decimal precision
%1 = minimum field width
$- = left align

*/