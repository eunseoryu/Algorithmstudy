#include <iostream>
using namespace std;

int main(){
    string str;
    int ans[26] ={0};

    cin >> str;
    for(int i=0; i<str.length(); i++){
        if(str[i] >='a' && str[i] <='z'){
            ans[str[i]-'a']++;
        }
    }

    for(auto x:ans){
        cout << x <<' ';
    }

}