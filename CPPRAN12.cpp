/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;
bool a[1000], b[1000];
int n;

void Sol(){
    int maxlen=0;
    int suma=0, sumb=0;
    int index[2*n+1];
    memset(index, -1, sizeof(index));
    for(int i=0; i<n; i++){
        suma += a[i];
        sumb += b[i];
        int minus = suma - sumb;
        if(minus){
            int x = minus + n;
            if(index[x] == -1)
                index[x] = i;
            else if(i - index[x] > maxlen)
                maxlen = i - index[x];
        }
        else    maxlen = i + 1;
    }
    cout << maxlen << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n; i++)  cin >> b[i];
        Sol();
    }
    IOS()
    return 0;
}