#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    int t,r1,r2,b;
    double c_r,r_r,ball_played;

    cin >> t;
    while (t--) {
        cin >> r1 >> r2 >> b;
        ball_played=300-b;
        ball_played*=1.0;
        c_r=(r2/ball_played)*6;
        r_r=(((r1-r2+1)*1.0)/b)*6;
        printf("%0.2lf %0.2lf\n",c_r,r_r);
    }

    return 0;
}
