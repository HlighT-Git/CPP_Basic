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
            for(int j=0; j<n; j++)
                if(i!=0 && i!=n-1 && j!=0 && j!=n-1)
                    cout << "  ";
                else    cout << a[i*n+j] << ' ';
            cout << endl;
        }
    }
    IOS()
    return 0;
}