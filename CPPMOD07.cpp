/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;


int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n], Min = 1e9;
		for(int i=0; i^n; ++i){
			cin >> a[i];
			if(a[i] < Min)	Min = a[i];
		}
		int K = a[0] - Min;
		for(int i=1; i^n; ++i)
			K =	__gcd(K, a[i] - Min);
		int res = 0;
		for(int i=1; i<=K; ++i)
			if(K%i == 0) res++;
		cout << res << endl;
	}
	IOS()
    return 0;
}

