#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    string cmd;
    int num;
    queue<int> que;
    cin >> num;
    
    while(num > 0){
        cin >> cmd;
        if(cmd == "push"){
            int n;
            cin >> n;
            que.push(n);
        }

        else if(cmd == "front"){
            if(!que.empty()) cout << que.front() << '\n';
            else cout << -1 << '\n';
        }
        else if(cmd == "back"){
            if(!que.empty()) cout << que.back() << '\n';
            else cout << -1 << '\n';
        }
        else if(cmd == "pop"){
            if(!que.empty()) {
                cout << que.front() << "\n";
                que.pop();
            } else cout << -1 << '\n';
        }
        else if(cmd == "size"){
            cout << que.size() << '\n';
        }
        else if(cmd == "empty"){
            if(que.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        num--;
    }
    return 0;
}