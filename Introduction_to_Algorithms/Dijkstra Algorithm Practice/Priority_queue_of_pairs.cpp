#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <functional> // for std::greater

using namespace std;

int main() {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push(make_pair(23,2));
    pq.push(make_pair(5,7));
    pq.push(make_pair(10,1));

    while(!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    }
    return 0;
}