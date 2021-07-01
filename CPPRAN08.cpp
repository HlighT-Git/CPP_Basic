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
int test, n, k;
db a[lim];

/*Function*/

void init(){
	cin >> n >> k;
	cinArr(a, n);
}

void solve(){
	db sum = 0;
	Fu(i, 0, k, 1)
		sum += a[i];
	int index = 0;
	db ans = sum;
	Fu(i, 1, n-k+1, 1){
		sum = sum - a[i-1] + a[i+k-1];
		if(ans < sum){
			ans = sum;
			index = i;
		}
	}
	Fu(i, index, index + k, 1)	cout << a[i] << ' ';
}

/*Main program*/
int main(){
	IOS()
	cin >> test;
	while(test--){
		init();
		solve();
		cout << endl;
	}
    return 0;
}

/*Source: From H.LighT*/

