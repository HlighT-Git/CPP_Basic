/*Cre: H.LighT*/
#include <bits/stdc++.h>
#define IOS() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}
int main(){
    IOS()
    int test;   cin >> test;
    int n,x;
    while(test--){
        cin >> n >> x;
        int y,res=-1;
        bool done=false;
        for(int i=0;i<n;i++){
            cin >> y;
            if(!done && y==x){
                res=i+1;
                done=true;
            }
        }
        cout << res << endl;
    }
    return 0;
}