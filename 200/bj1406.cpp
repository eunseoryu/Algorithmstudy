#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int M;
    string s = "";
    stack<char> left;
    stack<char> right;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        left.push(s[i]);
    }

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        char cmd, c;
        cin >> cmd;

        if (cmd == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if (cmd == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (cmd == 'B')
        {
            if (!left.empty())
            {
                left.pop();
            }
        }
        else if (cmd == 'P')
        {
            cin >> c;
            left.push(c);
        }
    }

    // left에 있는 원소들 모두 right로 이동!
    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }

    // right에 있는 원소 출력
    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
}
/*
#include <iostream>
#include <string>
using namespace std;
string ans, text;
char a;
int n, c;

void editor(){

    while(n > 0){
        cin >> a;

        if(a == 'L' && c > 0) c--;
        else if(a == 'D' && c < ans.length()) c++;
        else if(a == 'B' && c <= ans.length() && c -1 >= 0) {
            ans.erase(c-1, 1);
            c--;
        }
        else if(a == 'P'){
            cin >> text;
            ans.insert(c,text);
            c++;
        }
        n--;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string ans;
    int n, c;

    cin >> ans;
    cin >> n;
    c = ans.length();

    editor();
 
    cout << ans << '\n';
    return 0;
}
*/