#include <iostream>
#include <cstdio>

using namespace std;

int main () {

    int t,r1,r2;
    double c_r,r_r,ball_played,b;

    cin >> t;
    while (t--) {
        cin >> r1 >> r2 >> b;
        ball_played=300-b;
        double temp;
        temp=r2/ball_played;
        c_r=(temp)*6;
        //printf("c_r == %lf\n",c_r);
        temp=(r1-r2+1)/b;
        r_r=temp*6;
        printf("%.2lf ",c_r);
        printf("%.2lf\n",r_r);

    }

    return 0;
}
