/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int n;  cin >> n;
        int a[n];
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        bool done=true;
        if(a[0]==a[n-1])    cout << -1;
        else
            for(int i=1;i<n;i++)
                if(a[i]>a[0]){
                    cout << a[0] << ' ' << a[i];
                    break;
                }
        cout << endl;
    }
    IOS()
    return 0;
}