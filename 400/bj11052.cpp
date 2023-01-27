#include <bits/stdc++.h>
using namespace std;


int dp[1001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//1<=n<=1000
	//1<=pi<=10000
	int n;
	cin >> n;
	cin >> dp[1];
	for (int i = 2; i <= n; i++) {
		cin >> dp[i];
		for (int j = 1; j < i; j++) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
		}
	}
	cout << dp[n];

	return 0;
}

/*
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, max=0;
    cin >> T;
    vector<int> dp(T+1,0);
    int price[T+1] = {0};
    
    for(int i=1; i<=T; i++){
        cin >> price[i];
    }

    dp[0] = 0;

    for(int i=1; i<=T; i++){
        dp[i] = T%i==0 ? price[i]*(T/i) : price[i]*(T/i)+ price[T%i];
        if(max < dp[i]) max = dp[i];
        //cout << i << ':' << dp[i] <<" ::T/i: "<< T/i << "T//i: " << T%i << " | ";
    }

    cout << max;
    
    return 0;
}*/