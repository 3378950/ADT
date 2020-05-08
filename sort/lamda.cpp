#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n;
vector<string> v;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        v.push_back(s);
    }
    // sort based the length of each string
    sort(v.begin(), v.end(), [&](string a, string b) {return a.length() <= b.length();});

    for(int i = 0; i < n; i++) cout << v[i] << " ";

    return 0;
}