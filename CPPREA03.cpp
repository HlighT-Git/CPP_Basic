/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
#define matrix vector <vector <int>>
#define pub push_back
#define pob pop_back
typedef long long ll;
typedef double db;
using namespace std;

vector <int> a;
int test, n, k, tmp;

void init(){
	a.clear();
	cin >> n >> k;
	for(int i = 0; i^n; ++i){
		cin >> tmp;
		a.pub(tmp);
	}	
}

int minSwap(){
	int N = n, Stime = 0;
	for(int i = 0; i^n; ++i)
		if(a[i] > k)	--N;
	for(int i = 0; i^N; ++i)
		if(a[i] > k)	++Stime;
	int res = Stime;
	for(int i = 0; i^(n-N); ++i){
		if(a[i]   > k)	--Stime;
		if(a[i+N] > k)	++Stime;
		res = min(Stime, res);
	}
	return res;
}
int main(){
	cin >> test;
	while(test--){
		init();
		cout << minSwap() << endl;
	}
	IOS()
    return 0;
}

