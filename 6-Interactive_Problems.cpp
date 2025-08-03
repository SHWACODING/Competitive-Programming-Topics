// https://codeforces.com/problemset/gymProblem/101021/1

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// string Ask (int mid) {
//     cout << mid << endl;
//     cout.flush();
//
//     string sign; cin >> sign;
//     return sign;
// }
//
//
// int main () {
//     int l = 1, r = 1e6, ans = -1;
//
//     while (l <= r) {
//         int mid = l + (r - l) / 2;
//
//         if (Ask(mid) == ">=") {
//             ans = mid;
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//
//     cout << "! " << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/1167/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int Ask (int i, int j) {
//     cout << "? " << i << " " << j << endl;
//     cout.flush();
//
//     int ret; cin >> ret;
//     return ret;
// }
//
// int main () {
//     int s[6];
//
//     s[1] = Ask (1, 2);
//     s[2] = Ask (1, 3);
//     s[3] = Ask (1, 4);
//     s[4] = Ask (1, 5);
//
//     int GCD = 0;
//
//     for (int i = 1; i <= 4; i++)
//         GCD = __gcd(GCD, s[i]);
//
//     int first = 0;
//
//     for (auto it: {4, 8, 15, 16, 23, 42})
//         if (GCD % it == 0)
//             first = it;
//
//     s[0] = first;
//     s[1] = s[1]  / first;
//     s[2] = s[2]  / first;
//     s[3] = s[3]  / first;
//     s[4] = s[4]  / first;
//
//     set<int> st = {4, 8, 15, 16, 23, 42};
//     for (int i = 0; i <= 4; i++)
//         st.erase(s[i]);
//
//     s[5] = *st.begin();
//
//     cout << "! ";
//     for (auto it: s)
//         cout << it << " ";
//
//     return 0;
// }

// ==============================================================
// Another Solution Using next_permutation() Built-In Function ??
// ==============================================================

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int Ask (int x, int y) {
//     cout << "? " << x << " " << y << endl;
//     cout.flush();
//
//     int my; cin >> my;
//     return my;
// }
//
// int main () {
//
//     int a = Ask(1, 2);
//     int b = Ask(1, 3);
//     int c = Ask(1, 4);
//     int d = Ask(1, 5);
//
//     int p[] {4, 8, 15, 16, 23, 42};
//
//     do {
//         if (p[0]*p[1]==a && p[0]*p[2]==b && p[0]*p[3]==c && p[0]*p[4]==d) {
//             cout << "! ";
//             for (auto it: p)
//                 cout << it << " ";
//             return 0;
//         }
//     } while (next_permutation(p, p+6));
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/727/C

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int Ask (int x, int y) {
//     cout << "? " << x << " " << y << endl;
//     cout.flush();
//
//     int my; cin >> my;
//     return my;
// }
//
// int main () {
//     int n; cin >> n;
//
//     int x = Ask(1, 2);
//     int y = Ask(1, 3);
//     int z = Ask(2, 3);
//
//     int s[n];
//
//     s[0] = (x + y - z) / 2;
//     s[1] = x - s[0];
//     s[2] = y - s[0];
//
//     for (int i = 3; i < n; i++)
//         s[i] = Ask(1, i+1) - s[0];
//
//     cout << "! ";
//     for (auto it: s)
//         cout << it << " ";
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
