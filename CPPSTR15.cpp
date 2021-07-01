/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
int check[26];
void Reset(){
    for(int i=0; i<26; i++)
        check[i]=0;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;
        cin >> a;
        int res=0;
        for(int i=0; i<a.length(); i++)
            check[a[i]-'a']++;
        for(int i=0; i<26; i++)
            res += check[i]*(check[i]+1)/2;
        cout << res << endl;
        Reset();
    }
    IOS()
    return 0;
}