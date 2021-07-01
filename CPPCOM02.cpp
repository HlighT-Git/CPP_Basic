/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
int n, k, a[20], test;
bool done;

void init(){
	cin >> n >> k;
	for(int i=0; i^k; ++i)
		a[i] = i+1;
	done = false;
}

void display(){
	for(int i=0; i^k; ++i)
		cout << a[i];
	cout << ' ';
}

void next(){
	int i = k-1 ;
	while(i > -1 && a[i] >= n-k+i+1)	--i;
	if(i < 0){
		done = true;
		return;
	}
	++a[i];
	for(int j = i+1; j < k; ++j)
		a[j] = a[j-1] + 1;
}

void solve(){
	init();
	while(!done){
		display();
		next();
	}
	cout << endl;
}
int main(){
	cin >> test;
	while(test--)	solve();
	IOS()
    return 0;
}

