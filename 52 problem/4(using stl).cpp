#include <iostream>
#include <cstdio>
#include <cmath>
#include <set>

using namespace std;

set <int> s1;


int main() {
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int n;
        cin >> n;
        int s=sqrt(n);
        printf("Case %d:",i);
        s1.insert(1);
        s1.insert(n);
        for (int j=2;j<=s;j++){
            if (n%j==0){
                s1.insert(j);
                s1.insert(n/j);
            }
        }
        for (set <int> :: iterator it=s1.begin();it!=s1.end();++it) {
            cout << " " << *it ;
        }
        cout << endl;
        s1.clear();

    }
    return 0;
}
