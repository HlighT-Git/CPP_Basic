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
        int n;  cin >> n;
        int a[n*n];
        for(int i=0; i<n*n; i++)  cin >> a[i];
        for(int i=0; i<n; i++){
            if(i%2)
                for(int j=n-1; j>=0; j--)
                    cout << a[i*n+j] << ' ';
            else
                for(int j=0; j<n; j++)
                    cout << a[i*n+j] << ' ';
        }
        cout << endl;
    }
    IOS()
    return 0;
}