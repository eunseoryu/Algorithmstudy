#include <iostream>

using namespace std;

int main(){
    int n, result = 0, temp;
    cin >> n;

    for(int i = 0; i < (n - 1); i++){
        cin >> temp;
        result += (temp - 1);
    }

    cin >> temp;
    result += temp;
    
    cout << result;

    return 0;
}