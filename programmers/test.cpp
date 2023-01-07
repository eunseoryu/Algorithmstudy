#include <bits/stdc++.h>

using namespace std;
/*
string solution(string s) {
    string answer = "";
    getline(cin,s);
    vector<int> n;
    
    for(int i=0; i<s.length(); i++){
        answer+= s[i];
        if(s[i] == ' '||i == s.length()-1){
            n.push_back(stoi(answer));
            answer ="";
        }
    }

    int lt=n.back(), st=n.back(); 
    
    while(!n.empty()){    
        n.pop_back();
        if(n.empty()) break;
        
        if(lt==n.back()) lt = n.back();
        else if(st== n.back()) st = n.back();
        else{
            lt = max(n.back(),lt);
            st = min(n.back(),st); 
        }
        n.pop_back();
        
    }
    
    answer+= to_string(st);
    answer+= " ";
    answer+= to_string(lt);
    
    
    
    return answer;
}*/
/*
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "", tmp;
    if(s[0]>='a'&&s[0]<='z'){
        answer += ('A' + s[0] -'a');
    } else answer += s[0];
    for(int i=1; i++; i<s.length()-1){
        if(s[i]>='a'&&s[i]<='z'&& s[i-1]==' '){ 
            tmp = ('A' + s[i] -'a');
        } else{
            tmp = s[i];
        }
    }
    answer += tmp;
    return answer;
}
*/
string solution(string s);

int main(){
    string s ="";
    getline(cin,s);
    string ans = solution(s);
    cout << ans;
    return 0;
}


using namespace std;

string solution(string s) {
    string answer = "", tmp;
    vector<string> v;
    
    for(int i=0; i<s.length(); i++){
        tmp = s[i];

        if(islower(s[i])){
            if(i==0) tmp = toupper(s[i]);
            if(i>0&&s[i-1]==' ') tmp = toupper(s[i]);
        }
        else if(i>0&&isupper(s[i])&&(isupper(s[i-1])||islower(s[i-1]))){
            tmp = tolower(s[i]);
        } 

        v.push_back(tmp);
    }
    while(!v.empty()){
        answer += v.back();
        v.pop_back();
    }
    reverse(answer.begin(), answer.end());
           
    return answer;
}