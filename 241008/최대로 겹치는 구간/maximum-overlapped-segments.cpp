#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> events; // 이벤트를 저장할 벡터 (시작점: 1, 끝점: -1)
    
    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        events.push_back({x1, 1});  // 시작점에 +1
        events.push_back({x2, -1}); // 끝점에 -1
    }
    
    // 이벤트를 첫 번째 요소(위치)를 기준으로 오름차순 정렬
    sort(events.begin(), events.end());
    
    int max_overlap = 0; // 최대 겹치는 선분 수
    int current_overlap = 0; // 현재 겹치는 선분 수
    
    // 이벤트를 순차적으로 처리
    for (auto event : events) {
        current_overlap += event.second; // 시작점이면 +1, 끝점이면 -1
        max_overlap = max(max_overlap, current_overlap); // 최대값 갱신
    }
    
    cout << max_overlap << endl;
    
    return 0;
}