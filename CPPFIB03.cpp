#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f[100];
bool check[1001];
void fil(){
    f[0]=0;
    f[1]=1;
    check[0]=true;
    check[1]=true;
    for(ll i=0;i<17;i++){
		f[i+2]=f[i]+f[i+1];
        check[f[i+2]]=true;
    }
}
main(){
	int test;	cin >> test;
    fil();
	while(test--){
		ll n;	cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)    cin >> a[i];
        for(int i=0;i<n;i++)
            if(check[a[i]]) cout << a[i] << ' ';
        cout << endl;
	}
	return 0;
}

