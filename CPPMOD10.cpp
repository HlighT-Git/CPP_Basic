/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

const int mod = 1e9 + 7;
int n,x;
int a[3000];
long long res;

void input(){
    cin >> n >> x;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
}
void solve(){
    res = a[n-1];
    long long k = x;
    for(int i = n - 2 ; i >= 0 ; i--){
        res = (res + a[i] * k) % mod;
        k = (k * x) % mod;
    }
    cout << res << endl;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		input();
        solve();
	}
	IOS()
    return 0;
}

