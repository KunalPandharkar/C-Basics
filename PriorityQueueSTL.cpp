#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> pq; // giving vector int is also mandatory

    pq.emplace(10);
    pq.emplace(20);
    pq.emplace(100);
    pq.push(5);

    cout << pq.size() << ' ' << pq.top() << endl;

    while(!pq.empty()){
        cout << pq.top() << ' ' ;
        pq.pop();
    }


}