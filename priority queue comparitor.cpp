#include <iostream>
#include <queue>
#include <vector>

struct CompareSecond {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;  // max-heap based on the second value
    }
};

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, CompareSecond> pq;

    pq.push({1, 10});
    pq.push({2, 5});
    pq.push({3, 20});

    std::cout << "Top element with smallest second value: (" << pq.top().first << ", " << pq.top().second << ")" << std::endl;  // Outputs (2, 5)

    return 0;
}
