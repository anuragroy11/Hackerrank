#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int actual[3], expected[3];
    cin >> actual[0] >> actual[1] >> actual[2];
    cin >> expected[0] >> expected[1] >> expected[2] ;
    
    if (expected[2] < actual[2]){
        cout << 10000 << endl;
    }
    else if (expected[1] < actual[1] && expected[2] == actual[2]){
        cout << 500 * (actual[1] - expected[1]) << endl;
    }
    else if (expected[0] < actual[0] && expected[2] == actual[2]){
        cout << 15 * (actual[0] - expected[0]) << endl;
    }
    else cout << 0 << endl;
    return 0;
}