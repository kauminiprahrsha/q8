
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c;
float root1,root2,root;



printf("enter value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
printf("enter value of c");
scanf("%d",&c);



root1 =(-b+(sqrt((b*b)-(4*a*c))))/(2*a) ;
root2 =(-b-(sqrt((b*b)-(4*a*c))))/(2*a) ;


if(a==0 && b==0)
{
    printf("no solution");
}
 else if (a==0)
{
    root= ((((-1)*c))/b);
    printf("x is %.2f",root);
}
else if((b==0) && (c>0))
{
    printf("no real roots");

}
 else if  (((b*b) -(4*a*c)) < 0)
{
    printf("no solution");
}
else
printf(" x =%.2f or x =%.2f",root1,root2);

    return 0;
}
