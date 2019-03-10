#include <stdio.h>
#include <stdlib.h>

int main () {
    char a[]="10000000000";
    char *ptr=&a;
    long long int res=atol(a);
    printf("%d\n",sizeof(res));
    printf("%d",res);
    //res=abs(res);
    //printf("%d",res);
    return 0;
}
