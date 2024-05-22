#include <iostream>
using namespace std;

int main(){
    string str;
    int end;
    int *ans;

    while(getline(cin,str)){

        ans = new int[4]{};
        end =0;

        for(auto x: str){
            if(x >= 'a' && x <='z') ans[0]++;
            else if(x >= 'A' && x <='Z') ans[1]++;
            else if(x == ' ') ans[3]++;
            else ans[2]++;
        }
        for(int i=0;i<4;i++){
            end += ans[i];
            cout << ans[i] << ' ';
        }
        
        if(end == 0) break;
        delete[] ans;
        cout <<'\n';
        
    }
}