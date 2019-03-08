#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        int a;
        cin >> a;
    int b=a;
        b%=10;
    int c=a;
        c%=10000;
        a=a-c;
        a/=10000;
        cout << "Sum =" ;
        printf(" %d\n",a+b);
    }
    return 0;
}
