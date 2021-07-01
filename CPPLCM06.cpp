/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
ll n, m;

void solve(){
   	ll sum = n*(n+1)/2; // tinh tong tu 1 den n
    if (m > sum)	cout << "No" << endl;
    else{
        ll x = (sum + m)/2; // giai he pt a + b = sum; a - b = m;(a, b la tong cac day con)
        ll y = sum - x;
        if ((x + y) == sum && (x - y) == m &&  x >= 0 && y >= 0 && __gcd(x,y) == 1) 
            cout << "Yes" << endl;
        else cout  << "No" << endl;
    }
}
int main(){
	int test;	cin >> test;
	while(test--){
		cin >> n >> m;
		solve();
	}
	IOS()
    return 0;
}

