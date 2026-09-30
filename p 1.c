#include<stdio.h>
int main()
{
    float P,R,T,SI;
    printf("ENTER THE VALUE");
    scanf("%f %f %f",&SI,&P,&T,&R);
    SI=P*T*R/100;
    printf("principal=%f \n",P);
    printf("rate of interest=%f \n",R);
    printf("time of period=%f \n",T);
    printf("simple interest=%f \n",SI);
    return 0;
}
