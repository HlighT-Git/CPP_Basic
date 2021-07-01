#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll GCD(ll a,ll b) {
	if(b==0) return a;
	return GCD(b,a%b);
}
ll LCM(ll a,ll b) {
	if(a==0 || b==0) return 0;
	else return a*b/GCD(a,b);
}
main(){
	ll test;	cin >> test;
	while(test--){
		ll n,tmp=1;	cin >> n;
		for(ll i=2;i<=n;i++)	tmp=LCM(tmp,i);
		cout << tmp <<endl;
	}
}

