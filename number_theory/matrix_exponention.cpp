
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixMultiply(vector<vector<int>> &A, vector<vector<int>> &B) {
    int n = A.size();
    int m = B[0].size();
    int p = B.size();
    vector<vector<int>> result(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}


vector<vector<int>> matrixExponentiation(vector<vector<int>> base, int power) {
    int n = base.size();

    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        result[i][i] = 1;
    }

    while (power > 0) {

        if (power % 2 == 1) {
            result = matrixMultiply(result, base);
        }

        base = matrixMultiply(base, base);
        power /= 2;
    }
    return result;
}


int main() {
    vector<vector<int>> arr = {{1, 0, 4}, {1, 2, 2}, {0, 4, 4}};

    vector<vector<int>> z = matrixExponentiation(arr, 3);


    for (auto i : z) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}
