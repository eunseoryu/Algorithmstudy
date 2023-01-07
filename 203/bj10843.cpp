#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    long long *n;
    long long ans =0;
    string str;
    n = new long long[4];
    for(int i=0; i<4; i++){
        cin >> n[i];
    }

    for(int i=0; i<4; i++){
        if(i%2 == 0 && i+1 <= 4){
            str = to_string(n[i+1]);
            ans += n[i] * pow(10,str.size());
        }
        else{
            ans += n[i];
        }
    }
    delete[] n;
    cout << ans;
    return 0;
}