#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    return a % b != 0 ? gcd(b, a % b) : b;
}

int main(){
    int N, l, ans;
    int find[N];

    cin >> N >> l;

    for(int i = 0; i < N ; i++){
        cin >> find[i];

        if(find[i] > l) find[i] = find[i] - l;
        else find[i] = l - find[i];
    }

    ans = find[0];

    for(int i = 1; i < N; i++){
        ans = gcd(ans, find[i]);
    }
    cout << ans;
    return 0;
}