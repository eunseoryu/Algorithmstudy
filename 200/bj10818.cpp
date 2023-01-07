#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(int argc, const char **argv) {
    stack<int> st;
    int n, num;
    string str;

    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> str;
        if(str == "push"){
            cin >> num;
            st.push(num);
        }
        else if(str == "top"){
            if(!st.empty()) cout << st.top() << endl;
            else cout << -1 << endl;
        }
        else if(str == "size"){
            cout << st.size() << endl;
        }
        else if(str == "pop"){
            if(!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else cout << -1 << endl;
        }
        else{
            cout << st.empty() << endl;
        }
    }
    return 0;
}