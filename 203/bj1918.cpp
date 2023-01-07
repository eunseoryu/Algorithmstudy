#include <iostream>
#include <stack>
using namespace std;


int priority(char c){
	switch (c)
	{
	case '(':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	default:
		break;
	}
}

int main(){
    cin.tie(0);

    stack<char> op;
    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++){

        if(str[i] >= 'A' && str[i] <= 'Z') {
            cout << str[i]; 
        } 
        else if(str[i] == '('){
            op.push(str[i]);
        }
        else if(str[i] == ')'){ 
            while(!op.empty() && op.top() != '('){
                cout << op.top();
                op.pop();
            }

            op.pop();
        }
        else{
            while(!op.empty() && priority(op.top())>= priority(str[i])){
                cout << op.top();
                op.pop();
            }
            op.push(str[i]);
            
        }

    }
    while(!op.empty()){
        cout << op.top();
        op.pop();
    }

    cout <<'\n';

    return 0;
}