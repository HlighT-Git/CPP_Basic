/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
const ll P = 1e9 + 7;
ll C(int r, int n){
    if (r > n - r) 
        r = n - r;
    int C[r + 1]; 
    memset(C, 0, sizeof(C)); 
    C[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]) % P; 
    return C[r]; 
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, r;
        cin >> n >> r;
        cout << C(r, n) << endl;
    }
    IOS()
    return 0;
}