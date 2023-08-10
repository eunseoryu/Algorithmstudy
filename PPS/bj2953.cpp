#include <iostream>

using namespace std;

int main(){
    int winner, max= 0, score = 0, temp;
    for(int i=0; i< 5; i++){
        score = 0;
        for(int j=0; j<4; j++){
            cin >> temp;
            score += temp;
        }
        if(score > max) {
            max = score;
            winner = i;
        }
    }
    
    cout << winner+1 << " " << max;
    return 0;
}