#include <iostream>
using namespace std;

long long dp[101][10];
long long mod = 1000000000;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i<=n; i++){
        for(int j =0; j<=9;j++){
            dp[i][j] = 0;
            if(j-1 >= 0){
                dp[i][j] += dp[i-1][j-1];
            }
            if(j+1 <= 9){
                dp[i][j] +=dp[i-1][j+1];
            }
            dp[i][j]%= mod;
        }
    }
    long long ans = 0;
    for(int i=0; i <= 9; i++){
        ans += dp[n][i];
    }
    ans %= mod;
    cout << ans <<'\n';
    return 0;
}