#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a;
  cin >> a;

  if (a < 1200) {
    cout << "ABC" << endl;
  } else {
    cout << "ARC" << endl;
  }

  return 0;
}