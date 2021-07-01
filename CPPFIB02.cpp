#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f[100];
main(){
	int test;	cin >> test;
    f[0]=0; f[1]=1;
	while(test--){
		ll n,i=1;	cin >> n;
        if(n==0)    cout << "YES";
        else{
            while(f[i]<n){
                f[i+1]=f[i]+f[i-1];
                i++;
            }
            if(f[i]==n)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
	}
	return 0;
}

