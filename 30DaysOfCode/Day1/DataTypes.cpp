#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    int j;
    double f;
    string t;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    cin >> j;
    cin >> f;
    getline(cin >> ws, t);
    
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + f << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + t << endl;

    return 0;
}