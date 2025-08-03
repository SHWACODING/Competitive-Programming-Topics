// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     int n; cin >> n;
//     vector<int> vec(n);
//
//     for (auto& i: vec) cin >> i;
//
//     int q; cin >> q;
//     while (q--) {
//         cout << "Enter value To Search For : ";
//         int x; cin >> x;
//
//         int l = 0, r = vec.size() - 1, ans = 0;
//
//         while (l <= r) {
//             int mid = (l + r) / 2;
//
//             if (vec[mid] == x) {
//                 ans = 1;
//                 break;
//             }
//             else if (vec[mid] < x)
//                 l = mid + 1;
//             else
//                 r = mid - 1;
//         }
//
//         if (ans)
//             cout << x << " Found\n";
//         else
//             cout << x << " Not Found\n";
//     }
//
//     return 0;
// }

//// OR -- With Built-In binary_search() Function ???

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     int n; cin >> n;
//     vector<int> v(n);
//     for (auto& x: v) cin >> x;
//
//     int q; cin >> q;
//     while (q--) {
//         int x; cin >> x;
//
//         if (binary_search(v.begin(), v.end(), x))
//             cout << x << " Found" << endl;
//         else
//             cout << x << " NOT Found" << endl;
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int can(int n) {
//     return n * (n + 1) / 2;
// }
//
// int main () {
//     int sum; cin >> sum;
//
//     int l = 0, r = 100, n = -1;
//
//     while (l <= r) {
//         int mid = l + r >> 1;
//         // int mid = (l + r) / 2;
//         // int mid = l + (r - l) / 2;
//
//         int x = can(mid);
//
//         if (x == sum) {
//             n = mid;
//             break;
//         } else if (x < sum) {
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//
//     if (n != -1)
//         cout << "The Number Whose Summation Is : " << sum << " Is -> " << n << endl;
//     else
//         cout << n << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/706/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     int n; cin >> n;
//
//     int s[n];
//
//     for (auto& it: s) cin >> it;
//
//     sort(s, s+n);
//
//     int q; cin >> q;
//
//     while (q--) {
//         int x; cin >> x;
//
//         //// Make ans = -1 Instead of ans = 0 and Remove that ??
//         // if (x < s[0]) {
//         //     cout << 0 << endl;
//         //     continue;
//         // }
//
//         int l = 0, r = n - 1, ans = -1;
//
//         while (l <= r) {
//             int mid = l + r >> 1;
//
//             if (s[mid] <= x) {
//                 ans = mid;
//                 l = mid + 1;
//             } else {
//                 r = mid - 1;
//             }
//         }
//
//         cout << ans + 1 << endl;
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/1201/C

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// const int sz = 2e5 + 10;
//
// int n, k, s[sz];
//
// bool can(ll mid) {
//     ll sum = 0;
//
//     // for (int i = n/2; i < n; ++i)
//     //     if (s[i] < mid)
//     //         sum += mid - s[i];
//
//     // OR
//
//     for (int i = n/2; i < n; ++i)
//         sum += max(0LL, mid - s[i]);
//
//     return sum <= k;
// }
//
// int main () {
//     cin >> n >> k;
//
//     for (auto& it: s) cin >> it;
//
//     sort(s, s + n);
//
//     ll l = s[n/2], r = s[n/2] + k, ans = 0;
//
//     while (l <= r) {
//         ll mid = l + (r - l) / 2;
//         if (can(mid)) {
//             ans = mid;
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/165/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll n, k;
//
// bool can(ll mid) {
//     ll sum = mid;
//
//     while (mid > 0) {
//         sum += mid / k;
//         mid /= k;
//     }
//
//     return sum >= n;
// }
//
// int main () {
//     cin >> n >> k;
//
//     ll l = 1, r = n, ans = n;
//
//     while (l <= r) {
//         ll mid = l + (r - l) / 2;
//
//         if (can(mid)) {
//             ans = mid;
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/3jD9SzY31n/contest/247464/problem/E

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll can(ll n) {
//     return n * (n + 1) / 2;
// }
//
//
// int main () {
//     ll n; cin >> n;
//
//     ll l = 1, r = 1e10, ans = 1;
//
//     while (l <= r) {
//         ll m = (l + r) / 2;
//
//         if (can(m) <= n) {
//             ans = m;
//             l = m + 1;
//         } else {
//             r = m - 1;
//         }
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
// typedef long double ld;
//
// using namespace std;
//
// ll n, k;
// ld s[10005];
//
// bool can (ld mid) {
//     ll ret = 0;
//
//     for (int i = 0; i < n; i++) {
//         ret += floor(s[i] / mid);
//     }
//
//     return ret >= k;
// }
//
// int main () {
//     cin >> n >> k;
//
//     for (int i = 0; i < n; i++) cin >> s[i];
//
//     int iterations = 300;
//     ld l = 0, r = 1e7, ans = 0;
//
//     while (iterations-- && l <= r) {
//         ld mid = (l + r) / 2;
//
//         if (can(mid)) {
//             ans = mid;
//             l = mid;
//         } else {
//             r = mid;
//         }
//     }
//
//     cout << fixed << setprecision(6) << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
