#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t ; cin >> t;
    while (t--) {
        float a;
        cin >> a;
        a=sqrt(a);
        if (ceil(a)==floor(a)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;

}
