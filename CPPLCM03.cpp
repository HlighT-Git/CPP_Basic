#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

ll A[100];

ll gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
ll gx(ll n){
	int g=A[n-1];
	while(n--){
		g=gcd(A[n-1],g);
		if(g==1) break;
	}
	return g;
}
ll powmod(ll a,ll b){
	if(b==0) return 1;
	ll x=powmod(a,b/2);
	x=x*x%mod;
	if(b%2) return x=x*a%mod;
	return x;
}
main(){
	ll test;
	cin >> test;
	while(test--){
		ll n;	cin >> n;
		ll h=1,g;
		for(int i=0;i<n;i++){
			cin >> A[i];
			h=h*A[i]%mod;
		}
		g=gx(n);
		cout << powmod(h,g) <<endl;
	}
}
