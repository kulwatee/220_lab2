#include<stdio.h>
int main()
{
    char k;
    float n,sum=0;
    int a,b;

    scanf("%c",&k);
    scanf("%f",&n);

    a=n;
            b=n*100;
            b=b%100;
    if(k=='A')
    {
        if(n<=200.00)
            printf("199.00");
        else
        {

            a-=200;
            sum+=a*3;
            sum+=b*3/60.0;
            sum=199+sum;
            printf("%.2f",sum);
        }

    }
    if(k=='B')
    {
        if(n<=400.00)
            printf("299.00");
        else
        {

            a-=400;
            sum+=a*2;
            sum+=b*2/60.0;
            sum=299+sum;
            printf("%.2f",sum);
        }
    }

}
