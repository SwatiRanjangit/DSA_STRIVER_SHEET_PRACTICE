#include <bits/stdc++.h>
using namespace std;


// most frequent element if more than one then return ythe smallest one TC: O(N)
int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> freqMap;

    for (int num : nums) {
        freqMap[num]++;
    }

    int maxFreq = 0;
    vector<int> mostFreqElements;

    for (auto it : freqMap) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            mostFreqElements.clear();
            mostFreqElements.push_back(it.first);
        } else if (it.second == maxFreq) {
            mostFreqElements.push_back(it.first);
        }
    }

    // Return the minimum element among the most frequent ones
    // int minElement = *min_element(mostFreqElements.begin(), mostFreqElements.end());
    // return minElement;
    
    int minElement = mostFreqElements[0]; // assume first is smallest

for (int i = 1; i < mostFreqElements.size(); i++) {
    if (mostFreqElements[i] < minElement) {
        minElement = mostFreqElements[i]; // update if smaller found
    }
}

return minElement;
}

int main() {
    vector<int> v = {2, 1, 6, 3, 3, 4};
    int res = mostFrequentElement(v);
    cout << "Most frequent element is: " << res << endl;
    return 0;
}
