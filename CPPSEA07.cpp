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
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)    cin >> a[i];
        sort(a, a+n);
        for(int i=n-1;i>=n-k;i--) cout << a[i] << ' ';
        cout << endl;
    }
    IOS()
    return 0;
}