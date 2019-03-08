#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                printf("*");
            }
            cout << endl;
        }
        if (t!=0)cout << endl;
    }

    return 0;
}
