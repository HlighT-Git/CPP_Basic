/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;
    cin >> test;
    int error=test;
    while(test--){
        string a;
        if(test == error - 1) getline(cin, a);
        getline(cin, a);
        a = ' ' + a;
        bool isspace=true;
        string tmp="", res="";
        for(int i=1; i<a.length(); i++){
            if(a[i] == ' ') isspace=true;
            else    isspace=false;
            if(isspace){
                if(a[i+1] != ' '){
                    res = tmp + ' ' + res;
                    tmp="";
                }
            }
            else    tmp += a[i];
        }
        if(tmp != "")   cout << tmp << ' ';
        cout << res << endl;
    }
    IOS()
    return 0;
}