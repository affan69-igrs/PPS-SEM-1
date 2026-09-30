#include<stdio.h>
void main()
{
    int i,m,n;
    printf("enter any two numbers \n");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
        if(i%2==0)
        printf("%d \n",i);
}
