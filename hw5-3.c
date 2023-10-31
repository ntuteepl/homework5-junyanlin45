#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,r;
    float m;
    scanf("%d%d",&h,&r);
    if(h<=60)
        m=h*r;
    if(h>60&&h<=120)
        m=(h-60)*r*1.33+60*r;
    if(h>120)
        m=(h-120)*r*1.66+60*r+60*r*1.33;
    printf("%.1f",m);
}

