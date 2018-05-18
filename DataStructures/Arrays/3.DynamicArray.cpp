#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the dynamicArray function below.
 */
vector<int> dynamicArray(int n, vector<vector<int>> queries) {

    vector<vector<int>> seqList(n, vector<int>(0));
    int index, index2, lastAnswer = 0;
    vector<int> output;
    
    for (auto input_line : queries) {
        if (input_line[0] == 1) {
            index = ((input_line[1]^lastAnswer)%n);
            seqList[index].push_back(input_line[2]);
        }
        else if (input_line[0] == 2) {
            index = ((input_line[1]^lastAnswer)%n);
            index2 = (input_line[2]%n);
            lastAnswer = seqList[index][index2];

            output.push_back(lastAnswer);

        }
    }
    
    return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int>> queries(q);
    for (int queries_row_itr = 0; queries_row_itr < q; queries_row_itr++) {
        queries[queries_row_itr].resize(3);

        for (int queries_column_itr = 0; queries_column_itr < 3; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = dynamicArray(n, queries);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        cout << result[result_itr];

        if (result_itr != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

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
