/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
const long int Max=1e5+5;

int n;
string a[Max];

bool cmp(string A, string B){
	string AB = A + B;
	string BA = B + A;
	return AB > BA;
}

void sol(){
	cin >> n;
	for(int i=0; i<n; i++)	cin >> a[i];
	sort(a, a+n, cmp);
	for(int i=0; i<n; i++)	cout << a[i];
	cout << endl;
}

int main(){
	int test; 
	cin >> test;
	while(test--)	sol();
	IOS()
	return 0;
}
