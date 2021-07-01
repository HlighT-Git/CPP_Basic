/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    string a;   getline(cin, a);
    string b;   getline(cin, b);
    string tmp = "";
    for(int i=0; i<a.size(); i++){
        if(a[i] == ' '){
            if(tmp != b && tmp != "")    cout << tmp << ' ';
            tmp = "";
        }
        else    tmp = tmp + a[i];
    }
    if(tmp != b)    cout << tmp;
    IOS()
    return 0;
}