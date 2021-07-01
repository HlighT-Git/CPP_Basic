/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false);
#define tie() cin.tie(NULL); cout.tie(NULL);
/*Compact*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second
#define all(a)	a.begin(), a.end()
#define Fu(i,a,b,jump)	for(int i=a; i<b; i+=jump)
#define Fd(i,a,b,jump)	for(int i=a; i>b; i-=jump)
#define cinArr(a, n)	for(int i=0; i<n; ++i)  cin >> a[i];
#define coutArr(a, n)	for(int i=0; i<n; ++i)	cout << a[i] << ' ';
/*Constant*/
#define Pi atan(1)*4
#define lim 100005
#define im INT_MAX
#define in INT_MIN
/*Declare*/
using namespace std;
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

/*Initialize*/
ll test, n;
ll a[lim];

/*Function*/

void solve(){
	cin >> n;
	ll tmp = 1, res = 0, start = 0;
	cinArr(a, n);
	Fu(i, 0, n, 1){
		cout << i << ' ';
		if(a[i])	tmp*=a[i];
		if(a[i] == 0 || i == n-1){
			//cout << tmp;
			if(a[i-1] == 0 && a[i] == 0)	tmp = 0;
			if(tmp < 0){
				if(a[i-2] == 0 && a[i] == 0)	tmp = 0;
				else{
					ll L = start;
					ll R = (a[i])?i:(i-1);
					ll prdL = 1;
					ll prdR = 1;
					while(a[L] > 0)	prdL*=a[L++];
					while(a[R] > 0)	prdR*=a[R--];
					tmp /= (prdL*a[L] > prdR*a[R])?(prdL*a[L]):(prdR*a[R]);
				}
			}
			start = i+1;
			if(tmp > res)	res = tmp;
			tmp = 1;
		}
	}
	cout << res;
}

/*Main program*/
int main(){
	IOS()
	cin >> test;
	while(test--){
		solve();
		cout << endl;
	}
    return 0;
}

/*Source: From H.LighT*/

