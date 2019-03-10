#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int t;cin >> t;
    for (int i=1;i<=t;i++) {
        int a,b,c,t1,t2,t3;
        cin >> a >> b >> c;
        if (a < b || a < c) {
            if ( a < b){
                if (b < c){
                    t1=a;t2=b;t3=c;
                }
                else {
                    if (c < a){
                        t1=c;t2=a;t3=b;
                    }
                }
            }
            else if (a < c ){
                if (c < b){
                  t1=a;t2=c;t3=b;
                }
                else {
                    if (b<a){
                        t1=b;t2=a;t3=c;
                    }
                }
            }
        }
        else {
            t3=a;
            if (b < c){
            t1=b;t2=c;
            }
            else {
            t1=c;t2=b;
            }
        }
        printf("Case %d:",i);
        printf (" %d %d %d\n",t1,t2,t3);
    }
    return 0;
}
