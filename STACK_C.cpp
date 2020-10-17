#include <bits/stdc++.h>

using namespace std;

int _stack[1000006];
int last = 0;

int get_ind(const char& t) {
    if (t == '(') return 1;
    if (t == '[') return 2;
    if (t == '{') return 3;
}

void add(const char& t) {
    _stack[last++] = get_ind(t);
}

int get_pair_ind(const char& t) {
    if (t == ')') return 1;
    if (t == ']') return 2;
    if (t == '}') return 3;
}

void pop() {
    last--;
}

bool is_correct(const char& t) {
    if (last == 0) return false;
    int inp_index = get_pair_ind(t);
    int last_index = _stack[last - 1];
    return last_index == inp_index;
}

bool do_if_closing(const char& t) {
    if (is_correct(t)) {
        pop();
        return true;
    }
    return false;
}

int main() {
    freopen("stack.in", "r", stdin);
    freopen("stack.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (char t; cin >> t; ) {               //1 - круглые //2 - квадратные //3 - фигурные
        if (t == '(' || t == '[' || t == '{') add(t);
        else {
            if (!do_if_closing(t)) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << ((last == 0) ? "YES" : "NO");
}