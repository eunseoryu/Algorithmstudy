#include <iostream>

using namespace std;

int main(){
    int max = 0, current = 0;
    int in, out, temp;

    for(int i=0; i<4 ; i++){
        cin >> out >> in;
        temp = in - out;
        current = current + temp;
        max = (max > current)? max : current;
    }
    cout << max;
    return 0;
}