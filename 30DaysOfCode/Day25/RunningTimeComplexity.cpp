#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool prime(int x);

int main() {
    int entry;
    cin >> entry;
    vector<int> vec(entry);
    for(int i = 0; i < entry; ++i){
        cin >> vec[i];
        bool flag = prime(vec[i]);
        if(flag){
            cout<<"Prime"<<endl;
        }else{
            cout<<"Not prime"<<endl;
        }
    }
    
    
    
    return 0;
}

bool prime(int x){
    if(x == 1){
        return false;
    }
    if(x == 2){
        return true;
    }
    int sq = sqrt(x);
    for(int i = 2; i <= sq; ++i ){
        if(x%i == 0){
            return false;
        }
    }
    return true;
        
}