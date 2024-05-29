#include <iostream>
#include <stack>
#include <vector>

using namespace std;

long long largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    long long maxArea = 0;
    int n = heights.size();

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && heights[i] < heights[s.top()]) {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, static_cast<long long>(height) * width);
        }
        s.push(i);
    }

    while (!s.empty()) {
        int height = heights[s.top()];
        s.pop();
        int width = s.empty() ? n : n - s.top() - 1;
        maxArea = max(maxArea, static_cast<long long>(height) * width);
    }

    return maxArea;
}

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    long long result = largestRectangleArea(heights);
    cout << result << endl;

    return 0;
}