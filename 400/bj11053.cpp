#include <bits/stdc++.h>
using namespace std;


int dp[1001];
void slv(){
    ios:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b=0;

    cin >> n;
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> a;
        dp[i] = (a > b)? dp[i-1] +1 : dp[i-1];
        b = a;
    }

    cout << dp [n];
}
int main(){
    slv();
    return 0;
}