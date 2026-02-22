#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({23,2});
    pq.push({5,7});
    pq.push({10,1});

    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    }
}