#include <iostream>
#include <cmath>

using namespace std;

int getint(string str){
    int s=str.size();
    int num=0;
    num=((str[--s]-'0')*pow(10,0));
    return num;
}


int main() {
    int t;
    cin >> t;
    getchar();
    while (t--){
        string a;
        getline(cin,a);
        //long long int result=Cinteger(a);
        int result=getint(a);
        if (result>0){
            if (result%2==0){
                cout << "even" << endl;
            }
            else
                {
                    cout << "odd" << endl;
                }
        }
        else {cout << "even" << endl;}
    }
    return 0;
}
