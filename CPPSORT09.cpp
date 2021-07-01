/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k, res=0;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(a[j] == k - a[i])
                    res++;
        cout << res << endl;
    }
    IOS()
    return 0;
}