#include <stdio.h>
#include <stdlib.h>
#include "MACROS.h"

char root5(char x);
int count_ones(int x);

int main()
{
    printf("%d\n", GET_BIT(5,1));
    return 0;
}

/*char root5(char x)
{
    if(x==1)
    {
        return 1;
    }
    int res = 2;
    while((res*res*res*res*res)<x)
    {
        res++;
    }
    if((res*res*res*res*res)==x)
    {
        return res;
    }
    else
    {
        return 0;
    }

}*/
//the function returns char, and takes char, so we are bound form 0 to 255, 4^5=1024
char root5(char x)
{
    switch (x)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 32:
            return 2;
    }
    return 0;
}

int count_ones(int x)
{
    int ones = 0;
    while(x)
    {
        ones += x&1;
        x = x >> 1;
    }
    return ones;
}
