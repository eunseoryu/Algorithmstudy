#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    cin.tie(0);
    string input;
    stack<char> s;
    int total =0;

    cin >> input;

    for(int i = 0;i < input.length();i++){
        if(input[i] == '('){
            s.push(input[i]);
        }
        else if(input[i] == ')' && input[i-1]=='('){ // 레이저일때,
            s.pop();
            total += s.size();
        }
        else { // 마지막 자투리 정리
            total++;
            s.pop();
        }
    }
    
    cout << total << endl;
    return 0;
}