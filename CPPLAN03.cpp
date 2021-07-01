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
int test;

/*Function*/

void Multiply(string a, string b){
    int n = a.size() + b.size();
    int tmp[n];
    memset(tmp, 0, sizeof(tmp));
    Fd(i, a.size()-1, -1, 1)
    	Fd(j, b.size()-1, -1, 1)
    		tmp[i+j+1] += (a[i]-'0')*(b[j]-'0');
    Fd(i, n-1, -1, 1)
    	if(tmp[i] > 9){
    		tmp[i-1] += tmp[i]/10;
    		tmp[i] %= 10;
		}
	if(tmp[0])	cout << tmp[0];
	Fu(i,1 ,n, 1)	cout << tmp[i];
}

/*Main program*/
int main(){
	IOS()
	cin >> test;
	while(test--){
		string X,Y;
        cin >> X >> Y;
        Multiply(X,Y);
		cout << endl;
	}
    return 0;
}

/*Source: From H.LighT*/

