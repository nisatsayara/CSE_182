#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d,real,img;
    printf("Enter the values of a b c\n");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;

    if (d>0)
    {
        r1 = (-b + sqrt(d))/2*a;
        r2 = (-b - sqrt(d))/2*a;
        printf("The real roots are=%f %f",r1,r2);
    }
    else if (d==0)
    {
        r1 = r2 = -b/(2*a);
        printf("The equal roots are=%f %f",r1,r2);
    }
    else
    {
       real=-b/(2*a);
       img= sqrt(-d)/(2*a);
       printf("The imaginary roots are= %f+i%f %f-i%f",real,img,real,img);
    }
    return 0;
}
