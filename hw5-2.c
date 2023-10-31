#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    float s;
    scanf("%d",&m);66
    if(m<=800)
    {
        s=m*0.9;
    }
    if(m>800&&m<1500)
    {
        s=m*0.81;
    }
    if(m>=1500)
        s=m*0.9*0.79;
        printf("%.1f",s);
}

