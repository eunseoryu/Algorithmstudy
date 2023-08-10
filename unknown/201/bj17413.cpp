#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
    string str;
    deque<char> ans;
    deque<char> trn;

    getline(cin,str);

    for(int i=0; i<str.length();i++){
        if(str[i] == ' '|| str[i] =='<'){
            while(!trn.empty()){
                ans.push_back(trn.front());
                trn.pop_front();
            }
        }
        
        if(str[i] == '<'){
            ans.push_back(str[i]);
            while(str[i] != '>'){
                ans.push_back(str[++i]);
            }
        }
        else if(str[i] == ' ') ans.push_back(str[i]);

        else if(str[i] != '<' || str[i] != '>') {
            trn.push_front(str[i]); 
        }

        if(i == str.length()-1){
            while(!trn.empty()){
                ans.push_back(trn.front());
                trn.pop_front();
            }
        }
    }

    while(!ans.empty()){
        cout << ans.front();
        ans.pop_front();
    }

    while(!trn.empty()){
        trn.pop_front();
    }
    return 0;
}