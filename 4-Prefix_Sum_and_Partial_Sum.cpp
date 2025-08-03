
// https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/D

//// Time Limit Error ???
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     int n, q; cin >> n >> q;
//
//     int arr[n];
//     for (int i = 1; i <= n; i++) {
//         cin >> arr[i];
//     }
//
//     int result = 0;
//
//     while (q--) {
//         int L, R; cin >> L >> R;
//
//         for (int i = L; i <= R; i++) {
//             result += arr[i];
//         }
//         cout << result << endl;
//         result = 0;
//     }
//
//     return 0;
// }

// //// So Use The Idea of Prefix Sum ??
//
// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int main () {
//     int n, q; cin >> n >> q;
//
//     ll prefix[n+1] {};
//
//     for (int i = 1; i <= n; i++) {
//         cin >> prefix[i];
//
//         prefix[i] += prefix[i-1];
//     }
//
//     while (q--) {
//         int L, R; cin >> L >> R;
//
//         cout << prefix[R] - prefix[L-1] << endl;
//     }
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/313/B

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     string s; cin >> s;
//
//     int n = s.length();
//
//     s = ' ' + s;  // To Make it 1-Indexed
//
//     int freq[n+1] {};
//
//     for (int i = 1; i <= n; i++)
//         freq[i] = (s[i] == s[i+1]);
//
//     int prefixSum[n+1] {};
//
//     for (int i = 1; i <= n; i++)
//         prefixSum[i] = prefixSum[i-1] + freq[i];
//
//     int q; cin >> q;
//     while (q--) {
//         int L, R; cin >> L >> R;
//
//         cout << prefixSum[R] - prefixSum[L-1] - freq[R] << endl;
//     }
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://cses.fi/problemset/task/1660

// #include <bits/stdc++.h>
// typedef long long ll;
//
// using namespace std;
//
// int main () {
//     int n, x; cin >> n >> x;
//
//     ll p[n+1] {};
//
//     for (int i = 1; i <= n; i++) {
//         cin >> p[i];
//         p[i] += p[i-1];
//     }
//
//     map<ll, ll> mp;
//     ll ans = 0;
//
//     for (int i = 0; i <= n; i++) {
//         // Prefix Sum Usual Rule ??
//         // Sence  p[R] - p[L-1] = x;
//         // Then   p[L-1] = p[R] - x;
//         // Same   search = p[i] - x;
//         ll search = p[i] - x;
//         ans += mp[search];
//         mp[p[i]]++;
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://cses.fi/problemset/task/1662

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll fix(ll x, ll mod) {
//     return ((x % mod) + mod) % mod;
// }
//
// int main() {
//     int n;
//     cin >> n;
//
//     ll p[n + 1]{};
//
//     for (int i = 1; i <= n; i++) {
//         cin >> p[i];
//         p[i] += p[i - 1];
//         p[i] = fix(p[i], n);
//     }
//
//     map<ll, ll> mp;
//     ll ans = 0;
//
//     for (int i = 0; i <= n; i++) {
//         ans += mp[p[i]];
//         mp[p[i]]++;
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/E

// #include <bits/stdc++.h>
//
// typedef  long long ll;
//
// using namespace std;
//
// int main () {
//     int n, q; cin >> n >> q;
//
//     ll s[n + 2] {};
//
//     for (int i = 1; i <= n; i++)
//         cin >> s[i];
//
//     ll partial_sum[n+2] {};
//
//     while (q--) {
//         ll l, r, val; cin >> l >> r >> val;
//
//         partial_sum[l] += val;
//         partial_sum[r + 1] -= val;
//     }
//
//     for (int i = 1; i <= n; i++)
//         partial_sum[i] += partial_sum[i - 1];
//
//     for (int i = 1; i <= n; i++)
//         cout << s[i] + partial_sum[i] << " ";
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------------------

// Coordinate Compression ??

// #include <bits/stdc++.h>
// typedef long long ll;
//
// using namespace std;
//
// int main () {
//
//     int arr[] {20, 10, 20, 40, 10, 40, 50};
//
//     vector<int> v = {20, 10, 20, 40, 10, 40, 50};
//
//     sort(v.begin(), v.end());
//
//     v.erase(unique(v.begin(), v.end()), v.end());
//
//     for (int i = 0; i < 7; i++) {
//         arr[i] = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
//     }
//
//     for (auto it: arr)
//         cout << v[it] << " " << it << endl;
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

//// Coordinate Compression Problem
// https://codeforces.com/problemset/gymProblem/102961/E

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// struct coordinateCopmression{
// private:
//     vector<ll>init;
//     void compress(vector<ll> &v) {
//         sort(v.begin(),  v.end());
//         v.erase(unique(v.begin(), v.end()), v.end());
//     }
//
// public:
//     coordinateCopmression(vector<ll> &v) {
//         init=v;
//         compress(init);
//     }
//
//     int index(ll val) {
//         return lower_bound(init.begin(), init.end(), val) - init.begin();
//     }
//
//     ll initialVal(int idx) {
//         return init[idx];
//     }
// };
//
// int main () {
//     int n; cin >> n;
//
//     ll sz = n + n + 1;
//
//     ll L[n], R[n];
//
//     vector<ll> idx;
//
//     for (int i = 0; i < n; i++) {
//         cin >> L[i] >> R[i];
//
//         idx.push_back(L[i]);
//         idx.push_back(R[i]);
//     }
//
//     coordinateCopmression cp(idx);
//
//     for (int i = 0; i < n; i++) {
//         L[i] = cp.index(L[i]);
//         R[i] = cp.index(R[i]);
//     }
//
//     ll partialSum[sz] {};
//
//     for (int i = 0; i < n; i++) {
//         partialSum[L[i]]++;
//         partialSum[R[i] + 1]--;
//     }
//
//     for (int i = 1; i < sz; i++)
//         partialSum[i] += partialSum[i - 1];
//
//     cout << *max_element(partialSum, partialSum + sz) << endl;
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

//// Contribution Technique (Merge Prefix Sum, Frequency Array, ...) (SubArrays)

// https://cses.fi/problemset/task/1661

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     ll n, x; cin >> n >> x;
//
//     ll prefix_sum[n+1] {};
//
//     for (int i = 1; i <= n; i++) {
//         cin >> prefix_sum[i];
//         prefix_sum[i] += prefix_sum[i-1];
//     }
//
//     ll ans = 0;
//     map<ll, ll>freq;
//     for (int i = 0; i <= n; i++) {
//         ll search = prefix_sum[i] - x;
//         ans += freq[search];
//         freq[prefix_sum[i]]++;
//     }
//
//     cout << ans;
// }

//// OR -->

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     ll n, x; cin >> n >> x;
//
//     ll sum = 0, ans = 0;
//     map<ll, ll>freq;
//
//     freq[0] = 1;
//
//     for (int i = 1; i <= n; i++) {
//         ll a; cin >> a;
//         sum += a;
//
//         ll search = sum - x;
//         ans += freq[search];
//         freq[sum]++;
//     }
//
//     cout << ans;
// }

// -----------------------------------------------------------------------------------------------------

// https://cses.fi/problemset/task/1643

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     ll n; cin >> n;
//
//     ll sum = 0, ans = INT_MIN, mn = 0;
//     for (int i = 1; i <= n; i++) {
//         ll a; cin >> a;
//         sum += a;
//
//         ans = max(ans, sum - mn);
//         mn = min(mn, sum);
//     }
//
//     cout << ans;
// }

