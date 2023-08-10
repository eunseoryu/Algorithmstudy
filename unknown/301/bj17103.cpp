#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, args;
bool isPrime[1000001];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i <= 1000000; i++)
        if (isPrime[i])
            for (int j = i * i; j <= 1000000; j += i)
                isPrime[j] = false;

    while (n--) {
        cin >> args;
        int count = 0;
        for (int i = 2; i <= args / 2; i++)
            count += isPrime[i] and isPrime[args - i];
        cout << count << '\n';
    }
    return 0;
}

/*
bool isPrime(int num){
    for(int i=2; i*i<=num;i++){
        if(num%i == 0) return false;
    }
    return true;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, in, a=0, count;
    
    cin >> n;
    int array[n];
    
    while(n-- > 0){
        count =0;
        cin >> in;

        for(int i=2; i<=in/2;i++){
            if(isPrime(i)&&isPrime(in-i)){
                count++;
            }
        }
        cout << count;
    }
    
    return 0;
}*/