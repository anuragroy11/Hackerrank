#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int> input;
    int n, temp, numberOfSwaps = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        input.push_back(temp);
    }
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - 1; j++) {
            if (input[j] > input[j + 1]) {
                temp = input[j+1];
                input[j+1] = input[j];
                input[j] = temp;
                numberOfSwaps++;
            }
        }
        
        if (numberOfSwaps == 0) 
            break;
    }
    
    cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
    cout << "First Element: " << input[0] << endl;
    cout << "Last Element: " << input[n-1] << endl;
    return 0;
}