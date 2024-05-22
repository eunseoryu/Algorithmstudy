#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isPrime[10000001];

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i <= 1000000; i++){
        if (isPrime[i]){
            for (int j = i * i; j <= 1000000; j += i){
                isPrime[j] = false;
            }
        }
    }
    
    while(n>1){
        for(int i=2; i<=n ;i++){
            if(isPrime[i]&&n%i==0){
                cout << i << '\n';
                n = n/i;
                break;
            }
        }
    }
        
    return 0;
}