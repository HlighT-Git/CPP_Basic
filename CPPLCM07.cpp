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
ll pow10(ll n){
	if(n==0) return 1;
	ll x=pow10(n/2);
	x=x*x;
	if(n%2) return x=x*10;
	return x;
}
main(){
	ll test;	cin >> test;
	while(test--){
		ll x,y,z,n;	cin >> x >> y >> z >> n;
		ll lcm=LCM(x,y);
		lcm=LCM(lcm,z);
		double cd=(double)pow10(n-1)/lcm;
		if(cd<=1){
			if(pow10(n)>lcm) cout << lcm <<endl;
			else cout << -1 <<endl;
		}
		else if(pow10(n-1)%lcm) cout << lcm*(pow10(n-1)/lcm+1) <<endl;
		else cout << pow10(n-1) <<endl;
	}
}

