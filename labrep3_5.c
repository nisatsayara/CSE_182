#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter three sides of a triangle;\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2>side3 || side2+side3>side1 || side1+side3>side2)
    {
        printf("The triangle is valid");
    }
    else
    {
        ("The triangle is not valid");
    }
    return 0;
}
