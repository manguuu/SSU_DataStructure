#include <iostream>
#include <vector>

using namespace std;

vector<char> v;

void dfs(int n, long unsigned input) {
    char arr[2] = {'a', 'b'};
    if (v.size() == input) {
        for (auto iter : v) cout << iter;
        cout << endl;
        return;
    } else {
        for (int i = 0; i < 2; i++) {
            v.push_back(arr[i]);
            dfs(n + 1, input);
            v.pop_back();
        }
        return;
    }
}

int main() {
    long unsigned input; cin >> input;
    dfs(0, input);
}