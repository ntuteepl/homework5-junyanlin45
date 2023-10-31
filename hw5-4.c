#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H,M,A,m;
    float h ,t;
    scanf("%d%d",&H,&M);
    h=H*30+M*0.5;
    m=M*6;

    if(h>m)
    {
        t=h-m;
        if(t>180)
        {
            t=360-t;
        }
            printf("%.3f",t);
    }
    if(m>h)
    {
        t=m-h;
        if(t>180)
        {
            t=360-t;
        }
        printf("%.3f",t);
    }

}

