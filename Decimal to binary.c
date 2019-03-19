#include<stdio.h>
#include<stdlib.h>

int main()
{
    int d,i;
    int b[10];
    printf("please enter a decimal number\n");
    scanf("%d",&d);
    for(i=0;;i++)
    {
        b[i]=d%2;
        d=d/2;
        if(d==0)
        break;
    }
    //printf("i===%d\n",i);
    for(i=i;i>=0;i--)
        printf("%d  ",b[i]);
    return 0;
}
