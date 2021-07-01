/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int main(){
	IOS()
    int test;
    cin >> test;
    while(test--){
        int n;		cin >> n;
        string a;	cin >> a;
        int two=0, three=0, five=0, seven=0;
        for(int i=0; i<n; i++){
            switch (a[i]){
                case '2':
                    two++;
                    break;
                case '3':
                    three++;
                    break;
                case '4':
                    three++;
                    two+=2;
                    break;
                case '5':
                    five++;
                    break;
                case '6':
                    five++;
                    three++;
                    break;
                case '7':
                    seven++;
                    break;
                case '8':
                    seven++;
                    two+=3;
                    break;
                case '9':
                    seven++;
                    three+=2;
                    two++;
                default:
                    break;
            }
        }
        while(seven--)  cout << 7;
        while(five--)  cout << 5;
        while(three--)  cout << 3;
        while(two--)  cout << 2;
        cout << endl;
    }
    return 0;
}
