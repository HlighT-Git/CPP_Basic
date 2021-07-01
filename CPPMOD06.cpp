/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
string x;
ll y,mod;
ll powmod(ll a, ll b){
    if(b == 1)  return a;
    ll tmp = powmod(a, b/2);
    if(b%2) return  ((tmp*tmp)%mod * a)%mod;
    return  tmp*tmp%mod;     
}
ll convert(){
    ll res = 0;
    for(int i=0; i<x.length(); i++)
        res = (res * 10 + (x[i] - '0') )%mod;
    return res;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> x >> y >> mod;
        cout << powmod(convert(), y) << endl;
    }
    IOS()
    return 0;
}