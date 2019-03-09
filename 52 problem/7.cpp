#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main () {
    int t;
    cin >> t;
    cin>>ws;
        while (t--) {
            char ar[100000];
            scanf("%[^\n]",ar);
            getchar();
            char * ptr1;
            char * ptr2;
            int count=0;
            for (ptr1=ar; ; ptr1=ptr2) {
                strtol(ptr1,&ptr2,10) ;
                if (ptr1==ptr2)break;
                count++ ;
            }
        cout << count << endl;
        }
    return 0;
}
