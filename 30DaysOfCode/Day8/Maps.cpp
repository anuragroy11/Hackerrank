#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    
    int t;
    map<string, long> phonebook;
    string input;
    map<string, long>::iterator i;
    
    cin >> t;
    
    while (t) {
        
        string name;
        long ph;
        
        cin >> name >> ph;
        
        phonebook.insert(make_pair(name, ph));
        
        t--;
    }
    
    while (cin >> input) {
        i = phonebook.find(input);
        if (i == phonebook.end())
            cout << "Not found" << endl;
        else cout << i->first << "=" << i->second << endl;
    }
    
    return 0;
}