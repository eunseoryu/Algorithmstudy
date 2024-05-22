#include <bits/stdc++.h>

using namespace std;
/*
int main(){
    string n2 = "", n8;
    int temp, n=0;

    cin >> n8;

    for(int i=0; i<n8.length(); i++){
        temp = (n8[i] - '0');
        n2 += bitset<3>(temp).to_string();
    }

    n2 = n2.substr(n2.find("1"));
    cout << n2;


    return 0;
}
*/



string change8to2(char c)
{
    string result = "";
    int num = c - '0';

    if(num == 0)           // 이걸 해주지 않으면 0이 입력일 때 빈 문자열이 반환된다.
        return "0";

    while (num != 0)
    {
        result += to_string(num % 2);
        num = num / 2;
    }
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if (i == 0)
            cout << change8to2(s[i]);
        else
        {
            string temp = change8to2(s[i]);
            while(temp.size() != 3)
                temp = '0' + temp;
            cout << temp;
        }
    }
}