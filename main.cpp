#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define space ' '
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;

template <typename... Args>
void print(const Args&... args) {
    ((cout << args << space), ...);
}

template <typename T>
void print(const T& arr) {
    for (const auto& el : arr) {
        cout << el << space;
    }
    cout << endl;
}

template <typename T>
void print_pair(const T& arr) {
    for (const auto& el : arr) {
        cout << el.first << space << el.second << endl;
    }
    cout << endl;
}

void solve() {}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }
}