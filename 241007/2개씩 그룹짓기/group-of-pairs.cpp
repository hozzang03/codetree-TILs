#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> nums(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int maxSum = 0;

    for (int i = 0; i < N; i++) {
        maxSum = max(maxSum, nums[i] + nums[2 * N - 1 - i]);
    }

    cout << maxSum << endl;

    return 0;
}