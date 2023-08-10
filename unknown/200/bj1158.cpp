#include <iostream>
#include <queue>

using namespace std;

int find (queue<int> &q, int n){
    for(int i=0; i < n-1 ; i++){
        q.push(q.front());
        q.pop();
    }
    return q.front();
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int k, n;
    queue<int> q;
    queue<int> ans;

    cin >> k >> n;

    for(int i=1; i<= k; i++) q.push(i);
    
    while(!q.empty()){
        if(q.size() > 1) {
            ans.push(find(q,n));
            q.pop();
        }
        else {
            ans.push(q.front());
            q.pop();
        }
    }
    
    cout << "<";
    while(!ans.empty()){
        cout << ans.front();

        if(ans.size()>1) cout << ", ";
        ans.pop();
    }
    cout << ">\n";
}