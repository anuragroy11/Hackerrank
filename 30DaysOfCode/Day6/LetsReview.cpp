#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while (t) {
        string input;
        cin >> input;
        
        vector<char> splitInput( input.begin(), input.end() );
        
        //Printing out the even indexed characters
        for (int i = 0; i < splitInput.size(); i = i + 2) {
            cout << splitInput[i];
        }
        
        cout << " ";
        
        //Printing out the odd indexed characters
        for (int i = 1; i < splitInput.size(); i = i + 2) {
            cout << splitInput[i];
        }
        
        cout << endl;
        t--;
    }
    return 0;
}