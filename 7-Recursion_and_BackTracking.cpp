// Basic Idea Of Recusion ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// void R_Print(int i = 0) {
//     // Base Case ??
//     if (i == 5) return;
//
//     cout << "Recursion\n";
//
//     // Transition ??
//     R_Print(i + 1);
// }
//
// int main () {
//     R_Print();
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Print All Number from start To end ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// void R_Nums (int start = 1, int end = 10) {
//     // Base Case ??
//     if (start > end) return;
//
//     cout << start << " ";
//
//     // Transition
//     R_Nums(start+1, end);
// }
//
// int main () {
//     R_Nums();
//     cout << endl;
//     R_Nums(50, 60);
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// How Many Times You Reach End From The start ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int cnt = 0;
// void Calc (int start, int end) {
//     // Base Case ??
//     if (start > end) return;
//     if (start == end) cnt++;
//
//     // Transition ??
//     Calc(start+1, end); // Left Child
//     Calc(start+2, end); // Right Child
// }
//
// int main () {
//
//     Calc(1, 7);
//     cout << cnt << endl;
//     // Draw the Tree and Trace you Will Get The Answer ???
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
// int Calc (int start, int end) {
//     // Base Case ??
//     if (start > end) return 0;
//     if (start == end) return 1;
//
//     // Transition ??
//     int a = Calc(start+1, end); // Left Child
//     int b = Calc(start+2, end); // Right Child
//
//     return a + b;
// }
//
// int main () {
//
//     cout << Calc(1, 7) << endl;
//     // Draw the Tree and Trace you Will Get The Answer ???
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Maze Runner Codeforces BFCAI Group Problem ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int n;
// char s[10][10];
// int sx, sy, ex, ey;
// bool vis[10][10];
//
// int MazeRunner (int x, int y) {
//     // Base Case ??
//     if (x < 1 || x > n || y < 1 || y > n || s[x][y] == '#' || vis[x][y]) return 1e5;
//     if (x == ex && y == ey) return 0;
//
//     // Transition ??
//     vis[x][y] = 1;
//
//     int ch1 = MazeRunner(x+1, y) + 1;
//     int ch2 = MazeRunner(x-1, y) + 1;
//     int ch3 = MazeRunner(x, y+1) + 1;
//     int ch4 = MazeRunner(x, y-1) + 1;
//
//     vis[x][y] = 0;
//
//     return min({ch1, ch2, ch3, ch4});
// }
//
// int main () {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         for (int j = 1; j <= n; j++)
//             cin >> s[i][j];
//
//     cin >> sx >> sy >> ex >> ey;
//
//     int ans = MazeRunner(sx, sy);
//
//     if (ans >= 1e5)
//         cout << -1 << endl;
//     else
//         cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Count Values Codeforces BFCAI Group Problem ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll n, s[20]; set<ll> ans;
//
// void CountValues(int i, ll sum) {
//     // Base Case ??
//     if (i == n) {
//         ans.insert(sum);
//         return;
//     }
//
//     // Transitions ??
//     CountValues(i+1, sum);
//     CountValues(i+1, sum+s[i]);
// }
//
//
// int main () {
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> s[i];
//
//     CountValues(0, 0);
//
//     cout << ans.size() - 1 << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Factorial Recursive Function ??

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll Factorial(ll n) {
//     // Base Case ??
//     if (n == 1) return 1;
//
//     // Transition ??
//     return n * Factorial(n-1);
// }
//
// int main () {
//
//     ll n; cin >> n;
//     cout << Factorial(n) << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/535/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll x, ans;
//
// void lucky (ll n = 0, int idx = 0) {
//     // Base Case
//     if (n > x) return;
//     if (n == x) {
//         ans = idx;
//         return;
//     }
//
//     // Transition
//     lucky(n * 10 + 4, 2 * idx + 1);
//     lucky(n * 10 + 7, 2 * idx + 2) ;
// }
//
// int main () {
//     cin >> x;
//
//     lucky();
//
//     cout << ans << endl;
//
//     return 0;
// }

// =========================
// Another Solution ??
// =========================

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll x;
//
// int lucky (ll n = 0, int idx = 0) {
//     // Base Case
//     if (n > x) return 0;
//     if (n == x) return idx;
//
//     // Transition
//     int left = lucky(n * 10 + 4, 2 * idx + 1);
//     int right = lucky(n * 10 + 7, 2 * idx + 2) ;
//     return left + right;
// }
//
// int main () {
//     cin >> x;
//
//     cout << lucky() << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/762/D

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int n, m, s[11][11];
//
// int max_path_sum (int i=0, int j=0) {
//     // Base Case
//     if (i >= n || j >= m) return -1e7;
//     if (i == n-1 && j == m-1) return s[i][j];
//
//     // Transition
//     int right = max_path_sum(i, j+1);
//     int down = max_path_sum(i+1, j);
//     return max(right, down) + s[i][j];
// }
//
// int main () {
//     cin >> n >> m;
//
//     for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
//
//     cout << max_path_sum() << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/gymProblem/100989/L

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll n, s[21];
//
// int Plus_or_Minus (int i = 1, ll sum = s[0]) {
//     // Base Case
//     if (i == n) {
//         if (sum == 0) return 0;
//         else return 1e5;
//     }
//
//     // Transition
//     ll ch1 = s[i], ch2 = -s[i];
//
//     if (s[i] < 0) swap(ch1, ch2);
//
//     int plus = Plus_or_Minus(i+1, sum+ch1) + (s[i] < 0);
//     int minus = Plus_or_Minus(i+1, sum+ch2) + (s[i] > 0);
//
//     return min(plus, minus);
// }
//
// int main () {
//     cin >> n;
//
//     cin >> s[0];
//     for (int i = 1; i < n; i++) {
//         char sign; cin >> sign;
//         cin >> s[i];
//         if (sign == '-') s[i] *= -1;
//     }
//
//     int ans = Plus_or_Minus();
//     if (ans > 20) cout << -1 << endl;
//     else cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// LIS (easy version) Codeforces

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// ll n, A[21];
//
// int LIS (int i = 0, ll last = 0) {
//     // Base Case
    if (i == n) return 0;

    // Transition
    int leave = LIS(i+1, last);
    int take = 0;

    if (A[i] > last) take = LIS(i+1, A[i])+1;

    return max(leave, take);
}

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << LIS() << endl;

    return 0;
}

// ---------------------------------------------------------------------------------------------------
