#include<stdio.h>

struct rectangle
{
    float width;
    float height;
}r;

void getvalues ()
{
    printf("Enter the length of width: ");
    scanf("%f",&r.width);
    printf("Enter the length of height: ");
    scanf("%f",&r.height);
}

void area()
{
    printf("Area of the given dimension of rectangle is %.2f",r.width*r.height);
}

main()
{
    printf("Using structure in C program\n");
    struct rectangle r;
    getvalues();
    area();
    printf("\nId-22DCE069");
}
