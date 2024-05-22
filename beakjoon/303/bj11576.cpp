#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans;
    int base1, base2, n, tmp, dec=0;
    cin >> base1 >> base2;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        dec += tmp*pow(base1,n-i-1);
    }

    while(dec>0){
        ans.push_back(dec % base2);
        dec = dec / base2;
    }

    while(!ans.empty()){
        cout << ans.back() << ' ';
        ans.pop_back();
    }
    return 0;
}