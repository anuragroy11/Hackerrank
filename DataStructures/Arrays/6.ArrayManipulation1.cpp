#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long n, t, a, b, k, max = 0, x = 0;

    cin >> n >> t;

    vector<long> list(n+1, 0);

    for (int i = 0; i < t; ++i) {
        
        cin >> a >> b >> k;
        list[a] += k;
        if((b+1) <= n)
            list[b+1] -= k;
    }

    for (int i = 1; i <= n; i++) {
        
        x = x + list[i];
        if (max < x)
            max = x;
            
    }

    cout << max << endl;

    return 0;
}