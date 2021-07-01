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
        int a[n],posnum=0;
        bool have1=false;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1) have1=true;
            if(a[i]>0)  posnum++;
        }
        if(!have1)   cout << 1 << endl;
        else{
            int j=2;
            bool done=false;
            sort(a, a+n);
            for(int i=n-posnum;i<n;i++)
                if(a[i]>j){
                    done=true;
                    cout << j << endl;
                    break;
                }
                else if(a[i]==j)    j++;
            if(!done)   cout << j << endl;
        }
    }
    IOS()
    return 0;
}