#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;

    vector<pair<int, string>> arr;

    for (int i = 0; i < a; i++) {
        int temp1;
        string temp2;
        cin >> temp1 >> temp2;
        arr.push_back({temp1, temp2});
    }

    stable_sort(arr.begin(), arr.end(), [](const pair<int, string>& p1, const pair<int, string>& p2) {
        return p1.first < p2.first;
    });

    for (int i = 0; i < a; i++) {
        cout << arr[i].first << ' ' << arr[i].second << endl;
    }

    return 0;
}
