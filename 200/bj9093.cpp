#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, const char **argv) {
    int n;
    string str;
    stack<char> st;

    cin >> n;
    cin.ignore();

    for(int i=0; i < n; i++){

        getline(cin, str);
        str += ' ';

        for(int i=0; i < str.length() ; i++){

            if(str[i] == ' '){
                while(!st.empty()){
                    cout << st.top(); 
                    st.pop();
                }
                cout << ' ';
            } 
            else st.push(str[i]);

        }
    }
    return 0;
}

