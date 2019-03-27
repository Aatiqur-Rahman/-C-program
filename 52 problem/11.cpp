#include <iostream>
#include <cstdio>

using namespace std;

long long int  fact(long long int n){
    if (n==0 || n==1){
        return 1;
    }
    else return n*fact(n-1);
}

int main () {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long int result=fact(n);
        printf("%lld\n",result);
    }
    return 0;
}
