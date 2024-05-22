#include <iostream>
#include <vector>

using namespace std;

int node = 0, vertex;
int res;
bool check[101];

void dfs(int n, vector<int> a[]){

    check[n] = true;
    for(int i=0; i<a[n].size(); i++){
        int j = a[n][i];
        if(!check[j]){
            dfs(j,a);
            res++;
        }
    }
}

int main(){
    
    int a, b;
    cin >> node >> vertex; 
    
    vector<int> graph[node + 1];
    bool check[node +1];

    while (vertex > 0){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        vertex --;
    }

    dfs(1, graph);
    cout << res;
	
    return 0;
}