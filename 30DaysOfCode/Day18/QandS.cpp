#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Implementing using vectors

class Solution {
    
    vector<char> stack, queue;
    
    public:
        void pushCharacter(char ch) {
            stack.push_back(ch);
        }
    
        void enqueueCharacter(char ch) {
            queue.push_back(ch);
        }
    
        char popCharacter() {
            auto ch = stack.rbegin();
            stack.rbegin() = stack.rbegin()++;
            return (*ch);
        }
    
        char dequeueCharacter() {
            auto ch = queue.begin();
            queue.begin() = queue.begin();
            return (*ch);
        }

};

//Implementing using stacks and queues from STL

class Solution {
    
    stack<char> s;
    queue<char> q;
    
    public:
        void pushCharacter(char ch) {
            s.push(ch);
        }
    
        void enqueueCharacter(char ch) {
            q.push(ch);
        }
    
        char popCharacter() {
            char ch = s.top();
            s.pop();
            return(ch); 
        }
    
        char dequeueCharacter() {
            char ch = q.front();
            q.pop();
            return(ch);
        }
            

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
    // create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}