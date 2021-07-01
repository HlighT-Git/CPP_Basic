/*Cre: H.LighT*/
#include <bits/stdc++.h>
using namespace std;
const long int maxN = 1e6+5;
int a[maxN];
int n;
void input(){
	cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
}
void solve(){
	int res=INT_MAX;
	for(int i=0 ; i<n ; i++)
		for(int j=i+1 ; j<n ; j++)
			if(abs(res) > abs(a[i] + a[j]))
				res = a[i] + a[j];
	cout << res << endl;
}
int main(){
	int test;   cin >> test; 
	while(test--){
        input(); 
        solve();
    }
	return 0;
}