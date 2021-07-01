/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
    ll test;
    cin >> test;
    while(test--){
        ll n;   cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++) cin >> a[i];
        sort(a, a+n);
        ll count=0,start=0;
        while(a[start]<0)   start++;
        a[start-1]=-1;
        for(ll i=start;i<n && count<n;i++){
            if(a[i-1]==count){
                cout << count << ' ';
                count++;
            }
            for(int j=a[i-1];j<a[i]-1 && count<n;j++){
                cout << "-1 ";
                count++;
            } 
        }
        if(a[n-1]==count)   cout << count << ' ';
        for(int i=count;i<n-1;i++)  cout << "-1 ";
        cout << endl;
    }
    IOS()
    return 0;
}