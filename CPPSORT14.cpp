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
        int a[n],res=0;
        for(int i=0;i<n;i++)    cin >> a[i];
        sort(a, a+n);
        for(int i=0, j=a[0];i<n;i++){
            if(a[i]==j) j++;
            else if(a[i]>j){
                res+=a[i]-j;
                j=a[i]+1;
            }
        }
        cout << res << endl;
    }
    IOS()
    return 0;
}