#include <bits/stdc++.h>

using namespace std;

bool evenCheck(int n) {
    if (n%2==0)
        return true;
    else return false;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if (!evenCheck(N) || (evenCheck(N) && N>=6 && N<=20))
        cout << "Weird";
    else cout << "Not Weird";

    return 0;
}


