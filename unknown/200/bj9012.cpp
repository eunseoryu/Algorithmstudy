#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> c;

bool check(string str){
    for(int i = 0 ; i < str.length() ; i++){
        
        if(str[i] == ')' && !c.empty() && c.top() == '(') {
            c.pop();
        } 
        else{
            c.push(str[i]); 
        }  
    }

    if(c.empty()) return true;
    else {
        while(!c.empty()) c.pop();
        return false;
    }
}

int main(int argc, const char **argv) {
    int n;
    string str;

    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n ; i++){

        getline(cin,str);

        if(check(str)) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }
}