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
//         // int mid = (l + r) / 1;
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

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


int main () {
    int n; cin >> n;

    return 0;
}

// ---------------------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
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
//
// int main () {
//
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
