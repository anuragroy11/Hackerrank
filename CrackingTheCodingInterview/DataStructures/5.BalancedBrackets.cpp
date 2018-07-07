#include <bits/stdc++.h>

using namespace std;

bool is_balanced(string expression) {
  stack<char> s;
  for (char c : expression) {
    if      (c == '{') s.push('}');
    else if (c == '[') s.push(']');
    else if (c == '(') s.push(')');
    else {
      if (s.empty() || c != s.top())
        return false;
      s.pop();
    }
  }
  return s.empty();
}

int main() {
  
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string e;
        getline(cin, e);
        
        if (is_balanced(e))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
