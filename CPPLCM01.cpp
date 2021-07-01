#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll GCD(ll a,ll b) {
	if(b==0) return a;
	return GCD(b,a%b);
}
ll LCM(ll a,ll b) {
	return a*b/GCD(a,b);
}
main(){
	ll test;	cin >> test;
	while(test--){
		ll a,b;	cin >> a >> b;
		cout << LCM(a,b) << " " << GCD(a,b) <<endl;
	}
}

