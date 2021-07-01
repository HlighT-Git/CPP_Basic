/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll mod(string b, ll a){
    ll res=0,len=b.length();
    for(int i=0;i<len;i++)
        res=(res*10+(b[i]-'0'))%a;
    return res;
}
ll GCD(ll a, ll b){
    if(b==0)    return a;
    return GCD(b, a%b);
}
int main(){
    int test;   cin >> test;
    while(test--){
        ll a,x,y;
        cin >> a >> x >> y;
        ll z=GCD(x, y);
        while(z--) cout << a;
        cout << endl;
    }
    IOS()
    return 0;
}