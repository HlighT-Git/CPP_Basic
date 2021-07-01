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
#define cinArr(a, n)	for(int i=0; i<n; ++i)	cin >> a[i];
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
int test, n, m, tmp;

/*Main program*/
int main(){
	IOS()
	cin >> test;
	while(test--){
		cin >> n >> m;
		bool row[n], column[m];
		memset(row, 0, sizeof(row));
		memset(column, 0, sizeof(column));
		Fu(i, 0, n*m, 1){
			cin >> tmp;
			if(tmp){
				row[i/m] = true;
				column[i%m] = true;
			}
		}
		Fu(i, 0, n, 1){
			Fu(j, 0, m, 1)
				if(row[i] || column[j])	cout << "1 ";
				else	cout << "0 ";
			cout << endl;
		}
	}
    return 0;
}

/*Source: From H.LighT*/

