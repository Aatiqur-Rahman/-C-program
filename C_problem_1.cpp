 // In the given three-digit positive integer swap the first and the last digits


#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a=n%10;n/=10;
    int b=n%10;n/=10;
    int temp=(b*10)+n;
    //cout << n << endl;
    //cout << temp << endl;
    n=(a*100)+temp;
    cout << n << endl;
    return 0;
}
