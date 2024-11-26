#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool isConsecutive(const vector<int>& nums) {
    if (nums.empty()) {
        return false;
    }
    unordered_set<int> seen;
    int minNum = INT_MAX;
    int maxNum = INT_MIN;
    for (int num : nums) {
        if (seen.count(num) > 0) {
            return false; // Duplicate number found
        }
        seen.insert(num);
        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
    }

    // Check if the range of numbers is consecutive and has the correct size
    return (maxNum - minNum + 1) == nums.size();
}

int main() {
    vector<int> testCases[] = {
        {5, 1, 4, 3, 2},
        {5, 1, 4, 3, 2, 8},
        {5, 6, 7, 8, 9, 9}
    };
    for (const auto& testCase : testCases) {
        bool isConsecutiveArray = isConsecutive(testCase);
        cout << "Array: ";
        for (int num : testCase) {
            cout << num << " ";
        }
        cout << " -> " << (isConsecutiveArray ? "True" : "False") << endl;
    }
    return 0;
}
