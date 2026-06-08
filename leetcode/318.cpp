#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();

        vector<int> bit(n, 0);

        for (int i = 0; i < n; i++) {
            for (char c : words[i]) {
                bit[i] |= (1 << (c - 'a'));
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((bit[i] & bit[j]) == 0) {
                    ans = max(ans,
                              (int)words[i].size() * (int)words[j].size());
                }
            }
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    Solution obj;
    cout << "Maximum Product = " << obj.maxProduct(words) << endl;

    return 0;
}