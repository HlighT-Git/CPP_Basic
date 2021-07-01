/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll GCD(ll a,ll b) {
	if(b==0) return a;
	return GCD(b,a%b);
}
ll LCM(ll a,ll b) {
	if(a==0 || b==0) return 0;
	else return a*b/GCD(a,b);
}
int main(){
    int test;   cin >> test;
    while(test--){
        ll m,n,a,b;   cin >> m >> n >> a >> b;
        ll x=LCM(a,b);
        ll res=(n/a-m/a)+(n/b-m/b)-(n/x-m/x);
        if(m%a==0 || m%b==0) res++;
        cout << res << endl;
    }
    IOS()
    return 0;
}