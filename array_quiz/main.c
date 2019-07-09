#include <stdio.h>
#include <stdlib.h>
#define ELEMENTS 15

int find_miss(int arr[]);
int flag_repeat(int arr[]);

int main()
{
    int ar[5]={1,5,4,4,2};
    printf("%d\n",flag_repeat(ar));

    return 0;
}

int find_miss(int arr[])
{
    int i = 0, sum = 0;
    for (i = 0; i<5; i++)
    {
        sum+=arr[i];
    }
    return ELEMENTS-sum;
}

int flag_repeat(int arr[])
{
    int i = 0;
    int found[5]={0,0,0,0,0};
    for(i = 0; i < 5; i++)
    {
        found[arr[i]-1]++;
        if(found[arr[i]-1]==2)
        {
            return arr[i];
        }
    }
    return 0;
}
