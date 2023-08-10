#include <iostream>

using namespace std;

int main(){
    int n, Y = 0, M = 0, temp, result;
    string str;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        Y += ((temp / 30 + 1) * 10);
        M += ((temp / 60 + 1) * 15);
    }

    result = (Y < M)? Y : M;
    
    str = (Y < M)? "Y" : "M";
    if( Y == M) str = "Y M";

    cout << str << " " << result;

    return 0;
}