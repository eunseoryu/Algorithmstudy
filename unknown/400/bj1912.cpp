#include <bits/stdc++.h>
#define N 100001

using namespace std;


int main(){

    int arr[N] = {};
    int dp[N] = {};
    int num;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    dp[0] = arr[0];
    int ans = arr[0];
     for(int i = 0; i < num; ++i){
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans;

    return 0;

}