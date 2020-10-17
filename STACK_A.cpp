#include <iostream>

using namespace std;

int _stack[1000];
int last = 0; //следующий элемент

void add(const unsigned int& t) {
    _stack[last++] = t;
}
void erase_and_print() {
    cout << _stack[--last] << endl;
}

int main() {
    freopen("stack.in","r", stdin);
    freopen("stack.out", "w", stdout);
    unsigned int n;
    cin >> n;
    for (unsigned int temp, i = 0; i < n; i++) {
        cin >> temp;
        if (temp != 0) add(temp);
        else {
            if (last == 0) continue;
            erase_and_print();
        }
    }
}