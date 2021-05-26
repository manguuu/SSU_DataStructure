#include <iostream>

using namespace std;

void Hanoi(int n, char from, char by, char to) {
    if (n == 1) {
        cout << from << "=>" << to << endl;
        return;
    } else {
        Hanoi(n - 1, from, to, by);
        cout << from << "=>" << to << endl;
        Hanoi(n - 1, by, from, to);
    }
}

int main() {
    Hanoi(3, 'A', 'B', 'C');
}