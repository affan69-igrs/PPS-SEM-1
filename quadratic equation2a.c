#include<stdio.h>
#include<math.h>
float main()
{
    int a,b,c,d,r1,r2;
    printf("enter the values");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
      printf("roots are imaginary");
    else if (d==0)
    {
        r1=-b/2*a;
        printf("roots are equal");
        printf("r1=%f",r1);
    }
    else
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("r1=%f",r1);
        printf("r2=%f",r2);
    }
}
