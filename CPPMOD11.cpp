/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

ll mtp(ll a, ll b, ll M){
	if(b == 1) return a;
	ll x = mtp(a, b/2, M);
	if(b&1)	return (2*x%M + a)%M;
	return 2*x%M;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		ll a, b ,c;
		cin >> a >> b >> c;
		cout << mtp(a, b ,c) << endl;
	}
	IOS()
    return 0;
}

