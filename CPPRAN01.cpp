/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n, q;   cin >> n >> q;
        int a[n];
        for(int i=0;i<n;i++)    cin >> a[i];
        while(q--){
            int l, r;   cin >> l >> r;
            int sum=0;
            for(int i=l-1;i<=r-1;i++)   sum+=a[i];
            cout << sum << endl;
        }
    }
    IOS()
    return 0;
}