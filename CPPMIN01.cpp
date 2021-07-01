/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
int M, S;
string a;

void CreMax(int m, int s){
    s-=9;
    while(s>0){
        a+='9';
        m--;
        s-=9;
    }
    a+=(char)(s + 9 + '0');
    m--;
    while(m--) a+='0';
}
void CreMin(int m, int s){
    string b=a;
    reverse(b.begin(), b.end());
    if(b[0]=='0'){
        b[0]='1';
        for(int i=1; i<b.length(); i++)
            if(b[i]!='0'){
                b[i]=(char)(b[i]-1);
                break;
            }
    }
    cout << b << ' ';
}

int main(){
    cin >> M >> S;
    if(S==0)
        if(M==1)    cout << "0 0";
        else cout << "-1 -1";
    else if(S>9*M) cout << "-1 -1";
    else{    
        CreMax(M, S);
        CreMin(M, S);
        cout << a;
    }
    IOS()
    return 0;
}