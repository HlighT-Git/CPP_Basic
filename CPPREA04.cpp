/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)    cin >> a[i];
        sort(a,a+n);
        int tmp=(n%2)?((n/2)+1):(n/2);
        for(int i=0;i<tmp;i++){
            cout << a[i] << ' ';
            if(n%2 && i==tmp-1)  break;
            cout << a[i+tmp] << ' ';
        }
        cout << endl;
    }
    IOS()
    return 0;
}