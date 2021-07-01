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
        string n;
        cin >> n;
        int tmp=0,len=n.length();
        if(n[len-1]=='1')  tmp+=1;
        for(int i=len-2, j=1; i>=0; i--, j++)
            if(n[i]=='1'){
                if(j%4==1)  tmp+=2;
                if(j%4==2)  tmp+=4;
                if(j%4==3)  tmp+=8;
                if(j%4==0)  tmp+=6;
            }
        if(tmp%5)   cout << "No";
        else        cout << "Yes";
        cout << endl;
    }
    IOS()
    return 0;
}