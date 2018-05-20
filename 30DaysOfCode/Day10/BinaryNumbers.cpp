#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int count = 0;
    int max = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while (n > 0) {
        if (n%2 == 1) {
            count++;
            if (count > max)
                max = count;
        }
        else count = 0;
        n = n/2;
    }

    cout << max;
    return 0;
}
