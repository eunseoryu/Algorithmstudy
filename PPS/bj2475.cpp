#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int res = 0;
    int num[5];
    for(int i=0; i<5; i++){
        cin >> num[i];
        res += pow(num[i],2);
        
    }
    res = res % 10;
    cout << res;

    return 0;
}