/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll powmod(ll a, ll b, ll mod){
    if(b==0) return 1;
    ll tmp=powmod(a, b/2, mod);
    tmp=tmp*tmp%mod;
    if(b%2) return tmp*a%mod;
    return tmp;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        ll x,y,p;
        cin >> x >> y >> p;
        cout << powmod(x, y, p) << endl; 
    }
    IOS()
    return 0;
}