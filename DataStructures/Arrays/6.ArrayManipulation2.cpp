#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


long arrayManipulation(long n, vector<vector<long>> queries) {
    
    vector<long> list(n+1, 0);
    long x = 0, max = 0;
    
    for (auto query : queries) {
        list[query[0]] += query[2];
        if (query[1]+1 <= n)
            list[query[1] + 1] -= query[2];
    }
    
    for (int i = 1; i <= n; i++) {
        x = x + list[i];
        if (max < x) max = x;
    }
    
    return max;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    long n = stoi(nm[0]);

    long m = stoi(nm[1]);

    vector<vector<long>> queries(m);
    for (int queries_row_itr = 0; queries_row_itr < m; queries_row_itr++) {
        queries[queries_row_itr].resize(3);

        for (int queries_column_itr = 0; queries_column_itr < 3; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
