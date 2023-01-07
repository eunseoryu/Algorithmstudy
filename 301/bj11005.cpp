#include <bits/stdc++.h>
using namespace std;

string get_n_number(int num, int n){
    string str;
    while(num!=0){
        if(num%n == 0){
            str += "0";
            num = num/n;
        } else{
            if( num%n < 10){
                str+= ('0'+num%n);
            } 
            else{
                str+= ('A'+(num%n-10));
            }
            num = (num - (num%n))/n;
        }
    }
    reverse(str.begin(),str.end());
    return str;
}

int main(){
    int num, n;
    string ans;

    cin >> num >> n;
    ans = get_n_number(num, n);
    cout << ans;
    return 0;
}