#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int input  = 1, temp;
    int count[10] = {0};

    for(int i=0; i<3; i++){
        cin >> temp;
        input = input * temp;
    }
    string str = to_string(input);

    for(char ch: str){
        count[ch - '0']++;
    }

    for(int v : count ){
        cout << v << '\n';
    }

    
    return 0;
}