/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int s[10000];
void snt(){
    s[0]=1;
    s[1]=1;
	for(ll j=2;j<100;j++)
		if(s[j]==0)
			for (ll k=2*j;k<10001;k+=j)
				s[k]=1;
}
int main(){
    int test;   cin >> test;
    snt();
    while(test--){
        ll m,n;   cin >> m >> n;
        for(int i=m;i<=n;i++)
            if(s[i]==0)    cout << i << ' ';
        cout << endl;
    }
    IOS()
    return 0;
}