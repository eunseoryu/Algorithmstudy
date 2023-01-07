#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string str;
	string temp[1000];
	cin >> str;
	int l = str.length(); //입력받은 문자열의 길이 
	for(int i=0; i<l; i++){
		temp[i] = str.substr(i, l); //문자열의 i~l까지를 temp[i]에 복사 
	}
	sort(temp, temp+l); //오름차순 
	for(int i=0; i<l; i++){
		cout << temp[i] << endl;
	}
}

/*#include <iostream>
#include <deque>
using namespace std;

void printstr (int n , string str){
    string a;
    for(int i= n; i<str.length();i++){
        a += str[i];
    }
    cout << a <<'\n';
}
int main(){
    deque<int> ans;
    string str;

    cin >> str;
    ans.push_back(0);

    for(int i=1; i<str.length(); i++){
        for(int j=0; j<i; j++){
            if(str[i] > str[ans.back()]){
                ans.insert(ans.end(),i);
                break;
            }
            else if(str[i] <= str[ans[j]]){
                ans.insert(ans.begin()+j,i);
                break;
            }
        }
    }
    
    for(auto x: ans){
        printstr(x,str);
    }
}*/