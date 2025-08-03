// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//
//     int freq[26] {};
//
//     string s;
//     cin >> s;
//
//     for (int i = 0; i < s.length(); i++) {
//         freq[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] == 0) { continue; }
//
//         char ch = i + 'a';
//
//         cout << ch << " : " << freq[i] << endl;
//     }
//
//     return 0;
// }

// OR -- This Sol For Memory Optimization ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//     int freq[26] {};
//
//     char ch;
//     while (cin >> ch) {
//         freq[ch - 'a']++;
//     }
//
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] != 0) { continue; }
//         char x = 'a' + i;
//         cout << x << " : " << freq[i] << endl;
//     }
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

//// Counting Sort Technique Using Frequency Array ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//     int freq[26] {};
//
//     int n;
//     cin >> n;
//
//     while (n--) {
//         char c;
//         cin >> c;
//         freq[c - 'a']++;
//     }
//
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0) {
//             while (freq[i]--) {
//                 cout << char(i + 'a');
//             }
//         }
//     }
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/A

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     int N;
//     cin >> N;
//
//     if (N < 26) {
//         cout << "NO" << endl;
//         return 0;
//     }
//
//     int cnt = 0;
//     int freq[26] {};
//
//     string s;
//     cin >> s;
//
//     for (auto &c: s)
//         c = tolower(c);
//
//     for (int i = 0; i < N; i++)
//         freq[s[i] - 'a']++;
//
//     for (int i = 0; i < 26; i++)
//         if (freq[i] > 0)
//             cnt++;
//
//     if (cnt < 26)
//         cout << "NO" << endl;
//     else
//         cout << "YES" << endl;
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------

// https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/B

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     int n, k; cin >> n >> k;
//     string s; cin >> s;
//
//     int freq[26] {};
//
//     for (int i = 0; i < n; i++) {
//         freq[s[i] - 'a']++;
//     }
//
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > k) {
//             freq[i] -= k;
//             k = 0;
//         } else {
//             k -= freq[i];
//             freq[i] = 0;
//         }
//     }
//
//     bool del[n] {};
//
//     for (int i = n - 1; i >= 0; i--) {
//         if (freq[s[i] - 'a'])
//             freq[s[i] - 'a']--;
//         else
//             del[i] = true;
//     }
//
//     for (int i = 0; i < n; i++) {
//         if (!del[i])
//             cout << s[i];
//     }
//
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------



// -----------------------------------------------------------------------------------------------------
