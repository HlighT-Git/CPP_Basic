/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*Compact*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second
#define all(a)	a.begin(), a.end()
#define Fu(i,a,b,jump)	for(int i=a; i<b; i+=jump)
#define Fd(i,a,b,jump)	for(int i=a; i>b; i-=jump)
#define cinArr(a, n)	for(int i=0; i<n; ++i){ll tmp; cin >> tmp; a[i] = tmp;}
#define coutArr(a, n)	for(int i=0; i<n; ++i)	cout << a[i] << ' ';
/*Constant*/
#define Pi atan(1)*4
#define lim 100005
#define im INT_MAX
#define in INT_MIN
#define M 1e9+7
/*Declare*/
using namespace std;
typedef long long ll;
typedef double db;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

/*Initialize*/
int test, n, zero, a[lim];

/*Function*/

void init(){
	cin >> n;
	zero = n;
	memset(a, 0, sizeof(int)*(n+1));
	cinArr(a, n)
}

void solve(){
	Fu(i, 0, n, 1)
		if(a[i]){
			zero--;
			cout << ((a[i] - a[i+1])?a[i]:(a[i++]*2)) << ' ';
		}
	while(zero--) cout << "0 ";
}

/*Main program*/
int main(){
	cin >> test;
	while(test--){
		init();
		solve();
		cout << endl;
	}
	IOS()
    return 0;
}

