#include<stdio.h>
int main()
{
    int a;
    char sum;
    scanf("%c",&sum);
    fflush(stdin);
    scanf ("%d",&a);
    if(1<=a&&a<=32)
    {

    if(a%10==5)
    {
        printf("%c",92);
    }
    if(a%2!=0)
    {
        if(sum>=65&&sum<=73)

            printf("(^_^)");

        else if(sum<=82&&sum>73)


            printf("(*o*)");

        else if (sum>82&&sum<=90)


            printf("(T_T)");

    }
    else if(a%2==0)
    {
        if(sum>=65&&sum<=73)


            printf("{@_@}");

        else if(sum<=82&&sum>73)

            printf("{*v*}");

        else if (sum>82&&sum<=90)


            printf("{x_x}");

    }
    if(a%10==5)
    {
        printf("/");
    }
    }
    return 0;

}


