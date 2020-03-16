#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef pair<int, int> P;

const long long INF = 3e18 + 12;
const int inf = 1e9;

int keta_sum(int a) {
  string sta = to_string(a);
  int keta = sta.length();
  int sum = 0;
  rep(i, keta) {
    sum += sta[i] - '0';
  }

  return sum;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  repi(i, 1, n + 1) {
    int sum = keta_sum(i);
    if (sum >= a && sum <= b) {
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}