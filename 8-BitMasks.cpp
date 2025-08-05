// Simple Bit Operations ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     cout << ~5 << endl;
//     cout << ~7 << endl;
//     cout << ~9 << endl;
//
//     cout << "----------------\n";
//
//     cout << (5 & 7) << endl;
//     cout << (7 & 15) << endl;
//     cout << (6 & 9 & 13) << endl;
//
//     cout << "----------------\n";
//
//     cout << (5 | 7) << endl;
//     cout << (7 | 15) << endl;
//     cout << (6 | 9 | 13) << endl;
//
//     cout << "----------------\n";
//
//     cout << (5 ^ 7) << endl;
//     cout << (7 ^ 15) << endl;
//     cout << (6 ^ 9 ^ 13) << endl;
//
//     cout << "---------------\n";
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/A

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     ll q, n;
//     cin >> q >> n;
//
//     while (q--) {
//         ll op; cin >> op;
//
//         if (op == 1) {
//             ll x; cin >> x;
//             n |= x;
//         }
//         else if (op == 2) {
//             ll x; cin >> x;
//             n &= x;
//         }
//         else if (op == 3) {
//             ll x; cin >> x;
//             n ^= x;
//         }
//         else n = ~n;
//
//         cout << n << endl;
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/B

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// bool DetermineBit (ll n, int i) {
//     return (n >> i) & 1;
// }
//
// ll SetBit (ll n, int i) {
//     return n | (1 << i);
// }
//
// ll ResetBit (ll n, int i) {
//     return n & (~(1 << i));
// }
//
// ll ResetBit2 (ll n, int i) {
//     return n & (-1 ^ (1 << i));
// }
//
// ll FlipBit (ll n, int i) {
//     return n ^ (1 << i);
// }
//
// int main () {
//     ll q, n;
//     cin >> q >> n;
//
//     while (q--) {
//         ll op; cin >> op;
//
//         if (op == 1) {
//             ll x; cin >> x;
//             cout << DetermineBit(n, x) << endl;
//         }
//         else if (op == 2) {
//             ll x; cin >> x;
//             n = SetBit (n, x);
//             cout << n << endl;
//         }
//         else if (op == 3) {
//             ll x; cin >> x;
//             n = ResetBit (n, x);
//             cout << n << endl;
//         }
//         else {
//             ll x; cin >> x;
//             n = FlipBit (n, x);
//             cout << n << endl;
//         }
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/C

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// bool DetermineBit (ll n, int i) {
//     return (n >> i) & 1;
// }
//
// ll SetBit (ll n, int i) {
//     return n | (1 << i);
// }
//
// ll ResetBit (ll n, int i) {
//     return n & (~(1 << i));
// }
//
// ll ResetBit2 (ll n, int i) {
//     return n & (-1 ^ (1 << i));
// }
//
// ll FlipBit (ll n, int i) {
//     return n ^ (1 << i);
// }
//
// bool IsPowerOfTwo (int n) {
//     if (n == 0) return 0;
//     return !(n & (n - 1));
// }
//
// int main () {
//     ll n, q;
//     cin >> n >> q;
//
//     while (q--) {
//         ll op; cin >> op;
//
//         if (op == 1) {
//             for (int i = 0; i < 32; ++i) {
//                 if (DetermineBit(n, i) == 0) {
//                     n = SetBit(n, i);
//                     break;
//                 }
//             }
//             cout << n << endl;
//         }
//         else if (op == 2) {
//             for (int i = 0; i < 32; ++i) {
//                 if (DetermineBit(n, i) == 1) {
//                     n = ResetBit(n, i);
//                     break;
//                 }
//             }
//             cout << n << endl;
//         }
//         else if (op == 3) {
//             if (n == 0) { n = -1; }
//             else {
//                 for (int i = 0; i < 32; ++i) {
//                     if (DetermineBit(n, i) == 1) break;
//                     n = SetBit(n, i);
//                 }
//             }
//             cout << n << endl;
//         }
//         else if (op == 4) {
//             for (int i = 0; i < 32; ++i) {
//                 if (DetermineBit(n, i) == 0) break;
//                 n = ResetBit(n, i);
//             }
//             cout << n << endl;
//         }
//         else {
//             // if (__builtin_popcount(n) == 1)
//             if (IsPowerOfTwo(n))
//                 cout << "is power of two\n";
//             else
//                 cout << "not power of two\n";
//         }
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/D

// 1 ---> Recursive Approach

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// vector<vector<int>> ans;
// vector<int> v;
// int s[21], n;
//
// void SubSet (int i=0) {
//     if (i == n) {
//         ans.push_back(v);
//         return;
//     }
//
//     v.push_back(s[i]);
//     SubSet(i+1);
//     v.pop_back();
//     SubSet(i+1);
// }
//
// int main () {
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> s[i];
//
//     SubSet();
//
//     sort(ans.begin(), ans.end());
//
//     for (auto it: ans) {
//         for (auto i: it) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

// 2 ---> BitMasks Approach

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// bool DetermineBit (ll n, int i) {
//     return (n >> i) & 1;
// }
//
// ll SetBit (ll n, int i) {
//     return n | (1 << i);
// }
//
// ll ResetBit (ll n, int i) {
//     return n & (~(1 << i));
// }
//
// ll ResetBit2 (ll n, int i) {
//     return n & (-1 ^ (1 << i));
// }
//
// ll FlipBit (ll n, int i) {
//     return n ^ (1 << i);
// }
//
// bool IsPowerOfTwo (int n) {
//     if (n == 0) return 0;
//     return !(n & (n - 1));
// }
//
// int main () {
//     int n; cin >> n;
//     vector<vector<int>> ans;
//     int s[21];
//
//     for (int i = 0; i < n; i++) cin >> s[i];
//
//     for (int mask = 0; mask < (1 << n); mask++) {
//         vector<int> v;
//         for (int i = 0; i < n; i++) {
//             if (DetermineBit(mask, i) == 1) v.push_back(s[i]);
//         }
//         ans.push_back(v);
//     }
//
//     sort(ans.begin(), ans.end());
//
//     for (auto it: ans) {
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/E

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// bool DetermineBit (ll n, int i) {
//     return (n >> i) & 1;
// }
//
// ll SetBit (ll n, int i) {
//     return n | (1 << i);
// }
//
// ll ResetBit (ll n, int i) {
//     return n & (~(1 << i));
// }
//
// ll ResetBit2 (ll n, int i) {
//     return n & (-1 ^ (1 << i));
// }
//
// ll FlipBit (ll n, int i) {
//     return n ^ (1 << i);
// }
//
// bool IsPowerOfTwo (int n) {
//     if (n == 0) return 0;
//     return !(n & (n - 1));
// }
//
// int main () {
//     int n; cin >> n;
//     int s[n];
//     for (int i = 0; i < n; i++) cin >> s[i];
//
//     int ans = 0;
//
//     for (int mask = 0; mask < (1 << n); mask++) {
//         int even = 0, odd = 0;
//         for (int i = 0; i < n; i++) {
//             if (DetermineBit(mask, i) == 1) {
//                 if (s[i] & 1) odd++;
//                 else even++;
//             }
//         }
//         if (even > odd) ans++;
//     }
//
//     cout << ans << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------

// =====================================================
// BitSet in CPP ??
// =====================================================

// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
//
// int main () {
//     // Bitset of 31 bits and represents number 5 ??
//     bitset<31> b = 5;
//
//     // Print Binary Representation ??
//     cout << b << endl;
//
//     // Count The Number of 1 In The Binary Representation ??
//     cout << __builtin_popcount(5) << endl;
//     cout << b.count() << endl;
//
//     // Set Bit At a Specific Position To Specific Value ??
//     bitset<31> cpy = b;
//     cout << cpy << endl;
//     cout << cpy.set(4) << endl;
//
//     // Set All Bits To 1 ??
//     bitset<31> cpy2 = b;
//     cout << cpy2 << endl;
//     cout << cpy2.set() << endl;
//
//     // Reset Bit At a Specific Position To Specific Value ??
//     bitset<31> cpy3 = b;
//     cout << cpy3 << endl;
//     cout << cpy3.reset(0) << endl;
//
//     // Reset All Bits To 0 ??
//     bitset<31> cpy4 = b;
//     cout << cpy4 << endl;
//     cout << cpy4.reset() << endl;
//
//     // bitset is Dynamic ??
//     bitset<16> bs = 6;
//     cout << bs << endl;
//     bs = 9;
//     cout << bs << endl;
//
//     // Access a Specific Bit ??
//     int x = 37293;
//     cout << ((x >> 5) & 1) << endl;
//
//     bitset<32> bb = 37293;
//     cout << bb << endl;
//     cout << bb[5] << endl;
//
//     bb[5] = 0;
//     cout << bb << endl;
//     cout << bb[5] << endl;
//
//     cout << bb.to_ullong() << endl;
//
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------
