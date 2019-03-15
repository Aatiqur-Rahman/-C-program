#include <iostream>

using namespace std;

int main () {
    int t,r1,r2,b;
    double c_r,a_r,ball_played;

    cin >> t;
    while (t--) {
        cin >> r1 >> r2 >> b;
        ball_played=300-b;
        cout << ball_played << endl;
        c_r=(r2/ball_played)*6;

        a_r=((r1-r2+1)/b)*6;

        cout << c_r << " " << a_r << endl;

        printf("%0.2lf %0   .2lf\n",c_r,a_r);
    }
    return 0;
}
