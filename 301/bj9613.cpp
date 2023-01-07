#include <iostream>
using namespace std;

int gcd(int a, int b){
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main(){
    int n1, n2;
    long long ans;
    int* list;
    cin >> n1;

    while((n1--) != 0){
        ans = 0;
        cin >> n2;
        list = new int[n2];

        for(int i=0 ;i<n2 ;i++){
            cin >> list[i];
        }

        for(int i=0 ;i<n2; i++){
            for(int j= i+1; j<n2; j++){
                ans+= gcd(list[i], list[j]);
            }
        }
        delete[] list;
        cout << ans << '\n';
    }

    return 0;
}