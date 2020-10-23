#include <bits/stdc++.h>
#define US_INT unsigned short

using namespace std;

deque<US_INT> deq;

int main() {
    freopen("shelf.in", "r", stdin);
    freopen("shelf.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    US_INT n;
    cin >> n;
    US_INT i = 0;
    for (US_INT task; i < n; i++) {
        cin >> task;
        switch (task)
        {
        case 1:
            US_INT _num;
            cin >> _num;
            deq.push_front(_num);
            break;
        case 2:
            US_INT num;
            cin >> num;
            deq.push_back(num);
            break;
        case 3:
            cout << deq.front() << '\n';
            deq.pop_front();
            break;
        case 4:
            cout << deq.back() << '\n';
            deq.pop_back();
            break;
        }
    }
}