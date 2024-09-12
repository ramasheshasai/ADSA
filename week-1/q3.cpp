#include <iostream>
#include <vector>
#include <map>
using namespace std;

int no_of_pairs(vector<int>& v, int p) {
    int n = v.size();
    map<int, int> fm;

    // Count frequency of each modulo value
    for (int i = 0; i < n; i++) {
        fm[(v[i] % p + p) % p]++;
    }

    int c = 0;

    // Count pairs where the sum is divisible by p
    // Handle pairs with modulo 0 (i.e., fm[0])
    
    c += (fm[0] * (fm[0] - 1)) / 2;

    // Handle other modulo values
    for (int i = 1; i <= p / 2; i++) {
        if (i != p - i) {
            c += (fm[i] * fm[p - i]);
        }
    }

    // Special case for even p (pairs where both values are p/2)
    if (p % 2 == 0) {
        c += (fm[p / 2] * (fm[p / 2] - 1)) / 2;
    }

    return c;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int x;

        // Read vector elements
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }

        int p;
        cin >> p;

        // Calculate and print result
        int res = no_of_pairs(v, p);
        cout << res << endl;
    }

    return 0;
}

