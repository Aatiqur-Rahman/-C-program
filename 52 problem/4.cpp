#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i=1;i<=t;i++) {
        int num;
        cin >> num;
        printf("Case %d:",i);
        for (int j=1;j<=num;j++) {
            if (num%j==0) {
                cout << " " << j;
            }
        }
        cout << endl;
    }
    return 0;
}
