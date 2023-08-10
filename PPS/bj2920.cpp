#include <iostream>
#include <string>
using namespace std;

bool isequal(int a[], int b[]){
    for(int i = 0; i< 8; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    int num[8] = {};
    int asnd[8] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8};
    int desd[8] = {8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
    string str[3] = {"ascending","descending","mixed"};

    for(int i = 0; i< size(num); i++){
        cin >> num[i];
    }
    
    int idx = 2;
    if(isequal(num, asnd)){
        idx = 0;
    }
    else if(isequal(num, desd)){
        idx = 1;
    }

    cout << str[idx];
}