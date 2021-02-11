#include<stdio.h>


int main()
{
    int a,b,c,n[3],tmp=0;
    char m[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if(a>c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if(b>c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    scanf("%s",m);
    for(int i=0; i<3; i++)
    {
        if(m[i]=='A')
            n[i]=a;

        else if(m[i]=='B')
            n[i]=b;

        else if(m[i]=='C')
            n[i]=c;

    }
    printf("%d %d %d",n[0],n[1],n[2]);

    return 0;
}

