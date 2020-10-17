#include <bits/stdc++.h>
#define MAXIMAL 1000000000

using namespace std;

int _stack[1000006];
int _minStack[1000006];
int _min = MAXIMAL;
int last = 0; //следующий элемент(заполнится следующим)

void add() {
    int t;
    cin >> t;
    if (t < _min) _min = t;
    _stack[last] = t;
    _minStack[last++] = _min;
}

void erase() {
    --last;
    if (last == 0) _min = MAXIMAL;
    else _min = _minStack[last - 1];
}

void print_min() {
    cout << _min << ' ';
}

int main() {
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    unsigned int n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int ind, i = 0; i < n; i++) {
        cin >> ind;
        switch (ind)
        {
        case 1:
            add();
            break;
            //
        case 2:
            erase();
            break;
            //
        case 3:
            print_min();
            break;
        }
    }
}