#include<stdio.h>

int main()
{
    char sax;
    int age;
    float height;
    scanf_s("%c %d %f", &sax, &age, &height);
    printf("The sex is %c, the age is %d, and the height is %f", sax, age, height);
    return 0;
}


