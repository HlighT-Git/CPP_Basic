/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
int n, a[20], test;
bool done;

void init(){
	cin >> n;
	for(int i=0; i^n; ++i)
		a[i] = i+1;
	done = false;
}

void display(){
	for(int i=0; i^n; ++i)
		cout << a[i];
	cout << ' ';
}

void next(){
	int i = n-2;
	while(i > -1 && a[i] > a[i+1])	--i;
	if(i < 0){
		done = true;
		return;
	}
	int k = n-1;
	while(a[k] < a[i])	--k;
	swap(a[i], a[k]);
	sort(a+i+1, a+n);
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

