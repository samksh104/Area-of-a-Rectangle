#include <stdio.h>

int main(){

//int length = 3;
//int breath = 6;
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breath\n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d", length*breadth);
    return 0;
}