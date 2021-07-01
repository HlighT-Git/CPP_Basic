/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll mod(string b){
    ll res=0,len=b.length();
    for(int i=0;i<len;i++)
        res=(res*10+(b[i]-'0'))%11;
    return res;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;
        cin >> a;
        if(mod(a))  cout << 0;
        else        cout << 1;
        cout << endl;
    }
    IOS()
    return 0;
}