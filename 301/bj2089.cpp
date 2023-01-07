#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << "0";
        return 0;
    }

    string res ="";
    while (n!=0){
        if(n%-2==0){
            res +="0";
            n /= -2;
        }else{
            res +="1";
            n = (n-1) / -2;
        }
    }
    reverse(res.begin(),res.end());

    cout << res;

    return 0;
}