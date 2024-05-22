#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main(){
    vector<int> a;
    vector<int> b;
    int n, temp, result = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for(int i=0; i<n; i++){
        cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(),comp);

    for(int i=0; i<n; i++){
        result += a[i]*b[i]; 
    }
    cout << result;
}