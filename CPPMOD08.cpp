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
		int b, p, res = 0;
		cin >> b >> p;
		for(ll i =  1 ; i^p ; ++i)
	        if ((i*i)%p == 1){
	            ll last = i + p * (b/p);
	            if (last > b) last -= p;
	            res += ((last - i)/p + 1);
	        }
		cout << res << endl;
	}
	IOS()
    return 0;
}

