#include <bits/stdc++.h>
using namespace std;

int get_decimal_number(string num, int n){
    int ans , temp;
    for(int i=0; i<num.length(); i++){
        temp = (num[i] >= 'A' && num[i] <= 'Z')?(num[i]-'A'+10):(num[i]-'0');
        ans += temp*(pow(n,num.length()-i-1));
    }
    return ans;
}

int main(){
    int ans, n;
    string num;

    cin >> num >> n;
    ans = get_decimal_number(num, n);
    cout << ans;
    return 0;
}