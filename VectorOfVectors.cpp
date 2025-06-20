#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q; // Read n (number of arrays) and q (number of queries)

    vector<vector<int>> arrays(n); // Declare a vector of vectors

    // Read n variable-length arrays
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k; // Read size of the current array
        arrays[i].resize(k); // Resize the inner vector to hold k elements
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j]; // Read array elements
        }
    }

    // Process queries
    for (int q_idx = 0; q_idx < q; q_idx++) {
        int i, j;
        cin >> i >> j; // Read query indices
        cout << arrays[i][j] << endl; // Output the queried element
    }

    return 0;
}
