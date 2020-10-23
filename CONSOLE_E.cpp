#include <bits/stdc++.h>

using namespace std;

queue<char> que;

bool end(const int& n, int& i) {
    i++;
    if (i == n) {
        return false;
    }
    else return true;
}

int main() {
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    unsigned short int range;
    cin >> n >> range;
    int i = 0;
    for (int task; end(n, i); ) {
        if (que.size() == range) {
            que.pop();
        }
    }
}