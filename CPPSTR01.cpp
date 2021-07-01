/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
int exist[26];
void Reset(){
    for(int i=0; i<26; i++) exist[i]=0;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;   cin >> a;
        int k;      cin >> k;
        int need=26;
        for(int i=0; i<a.length(); i++){
            int x=a[i]-'a';
            exist[x]++;
            if(exist[x]==1) need--;
        }
        if(need > k) cout << 0;
        else    cout << 1;
        cout << endl;
        Reset();
    }
    IOS()
    return 0;
}