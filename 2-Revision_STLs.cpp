// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//
//     //////// STLs are Containers for Simplicity...
//
//     ////// 1. Sequential Containers
//
//     //// 1.1. Vector
//     // vector<int> vec {3, 1, 2, 5, 4};
//     //
//     // vec.push_back(6);
//     // vec.push_back(7);
//     //
//     // vec.pop_back();
//     //
//     // sort(vec.begin(), vec.end());
//     // sort(vec.rbegin(), vec.rend());
//     //
//     // for (auto it: vec)
//     //     cout << it << " ";
//
//     //// 1.2. Queue
//     // deque<int> de {3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 2,  2, 2, 2, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4};
//     // de.push_front(6);
//     // de.push_front(7);
//     // de.push_front(8);
//     // de.push_front(9);
//     //
//     // de.pop_front();
//     //
//     // de.erase(de.begin());        // Remove First Element
//     // de.erase(de.begin() + 1);    // Remove Second Element
//     //
//     // // These 2 Steps To Remove Duplicates
//     // sort(de.begin(), de.end());
//     // de.erase(unique(de.begin(), de.end()), de.end());
//     //
//     // for (auto it: de)
//     //     cout << it << " ";
//
//     //// 1.3. Array
//     // array<int, 5> arr;
//     // array<int, 5> arr { 1, 2, 3, 4, 5 };
//     // for (auto it : arr)
//     //     cout << it << " ";
//     //
//     // cout << endl;
//     //
//     // vector<array<int, 5>> vec2d {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
//     // for (auto it : vec2d)
//     //     for (auto i: it)
//     //         cout << i << " ";
//
//     // vector<int> v;
//     // v.clear();
//     //
//     // v.push_back(22);
//     // v.push_back(33);
//
//     // vector<int> v {7 ,8, 3, 4, 5};
//     // vector<int> a {1, 2};
//     //
//     // a = v;
//     //
//     // for (auto it: a)
//     //     cout << it << " ";
//     // cout << endl;
//
//     ////// 2. Container Adapters
//
//     //// 2.1. Stack
//
//     // stack<int> st;
//     // st.push(5);
//     // st.push(3);
//     // st.push(2);
//     // st.push(9);
//     //
//     // while ( !st.empty() ) {
//     //     cout << st.top() << " ";
//     //     st.pop();
//     // }
//
//     //// 2.2. Queue
//
//     // queue<int> q;
//     // q.push(5);
//     // q.push(4);
//     // q.push(3);
//     // q.push(2);
//     //
//     // cout << q.front() << endl;
//     // q.pop();
//     // cout << q.front() << endl;
//
//     //// 2.3. Priority Queue
//
//     // // This Sorts the elements in a Descending order
//     // // priority_queue<int> pq;
//     // // That Sorts the elements in an Ascending order
//     // priority_queue<int, vector<int>, greater<int>> pq;
//     //
//     // pq.push(5);
//     // pq.push(1);
//     // pq.push(4);
//     // pq.push(2);
//     // pq.push(3);
//     //
//     // // pq has very good benefit that is sorting its elements ??
//     // while (!pq.empty()) {
//     //     cout << pq.top() << " ";
//     //     pq.pop();
//     // }
//
// // ---------------------------------------------------------------------------------------------
//
//     ////// 3. Associative Container
//     //// 3.1. Set
//
//     // Make its elements Unique and Sorted
//     // The difference between it and priority_queue is that they can be printed ??
//
//     // set<int> st;
//     //
//     // st.insert(5);
//     // st.insert(4);
//     // st.insert(3);
//     // st.insert(7);
//     // st.insert(2);
//     // st.insert(2);
//     //
//     // cout << *st.begin() << endl;
//     // cout << *st.rbegin() << endl;
//     // cout << *st.end() << endl;
//     // cout << *--st.end() << endl;
//     //
//     // for (auto it: st)
//     //     cout << it << " ";
//     // cout << endl;
//     //
//     // // if (st.find(2) != st.end())
//     // //     st.erase(2);
//     // // or
//     // st.erase(st.find(2));
//     //
//     // for (auto it: st)
//     //     cout << it << " ";
//     // cout << endl;
//     //
//     // if (st.find(5) != st.end())
//     //     cout << "Found" << endl;
//     // else
//     //     cout << "Not Found" << endl;
//     //
//     // cout << *st.lower_bound(5) << endl;
//     // cout << *st.upper_bound(5) << endl;
//     //
//     // if (st.lower_bound(4) != st.end())
//     //     cout << "LB Found" << endl;
//     // else
//     //     cout << "LB Not Found" << endl;
//     //
//     // for (auto it=st.begin(); it!=st.end(); ++it)
//     //     cout << *it << " ";
//     // cout << endl;
//     //
//     // // Access the Next Element of 4
//     // auto it = st.upper_bound(4);
//     // if (it != st.end()) {
//     //     ++it;
//     //     if (it != st.end())
//     //         cout << *it << endl;
//     // }
//     //
//     // // Access the 2th Previous Element of 4
//     // auto iter = st.lower_bound(4);
//     // if (iter != st.begin()) {
//     //     --iter;
//     //     if (iter != st.begin()) {
//     //         --iter;
//     //         cout << *iter << endl;
//     //     }
//     // }
//
//     //// 3.3. Map
//
//     // map<int, int> m;
//     //
//     // cout << "Size Before Inserting " << m.size() << endl;
//     //
//     // m.insert({9, 3});
//     // m[8] = 4;
//     // m[7] = 5;
//     // m[6] = 2;
//     // m[-10] = 11;
//     // m[-4] = 1;
//     //
//     // for (auto[a, b]: m) {
//     //     cout << a << " -> " << b << endl;
//     // }
//     //
//     // cout << "Size After Inserting " << m.size() << endl;
//
//     // map<string, int> m2;
//     //
//     // cout << "Size Before Inserting " << m2.size() << endl;
//     //
//     // m2.insert({"Mo Algorithm", 3});
//     // m2["Graph Theory"] = 4;
//     // m2["Dynamic Programming"] = 5;
//     // m2["Greedy Algorithm"] = 2;
//     // m2["Number Theory & Geometry"] = 11;
//     // m2["Bit-Masks"] = 1;
//     //
//     // for (auto[a, b]: m2) {
//     //     cout << a << " -> " << b << endl;
//     // }
//     //
//     // cout << "Size After Inserting " << m2.size() << endl;
//
//     // pair<int, int> pa;
//     // // pa = {22, 33};
//     // pa = make_pair(44, 55);
//     // // pa.first = 66;
//     // // pa.second = 77;
//     //
//     // cout << pa.first << " -> " << pa.second << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/G

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     string s;
//     cin>>s;
//
//     stack<char> st;
//
//     for (auto it: s) {
//         if (it == '(' || it == '{' || it == '[')
//             st.push(it);
//         else {
//             if (st.empty()) {
//                 cout << "no";
//                 return 0;
//             } else {
//                 if (it == ')' && st.top() == '(') st.pop();
//                 else if (it == '}' && st.top() == '{') st.pop();
//                 else if (it == ']' && st.top() == '[') st.pop();
//                 else {
//                     cout << "no";
//                     return 0;
//                 }
//             }
//         }
//     }
//
//     if (!st.empty())
//         cout << "no" << endl;
//     else
//         cout << "yes" << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/A

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     string s;
//     cin >> s;
//
//     int cnt = 0;
//
//     stack<char> st;
//
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == '(')
//             st.push(s[i]);
//         else if (s[i] == ')' && !st.empty()) {
//             st.pop();
//             cnt+=2;
//         }
//     }
//
//     cout << cnt << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

//// https://codeforces.com/problemset/problem/637/B

//// Using Map ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//
//     stack<string> st;
//
//     int N;
//     cin >> N;
//
//     while (N--) {
//         string name;
//         cin >> name;
//
//         st.push(name);
//     }
//
//     map<string, int> vis;
//
//     while (!st.empty()) {
//         auto x = st.top();
//         st.pop();
//
//         if (vis[x]) { continue; }
//
//         vis[x] = 1;
//
//         cout << x << endl;
//     }
//
//     return 0;
// }

//// Using Set ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//
//     stack<string> st;
//
//     int N;
//     cin >> N;
//
//     while (N--) {
//         string name;
//         cin >> name;
//
//         st.push(name);
//     }
//
//     set<string> vis;
//
//     while (!st.empty()) {
//         auto x = st.top();
//         st.pop();
//
//         if (vis.find(x) != vis.end()) { continue; }
//
//         vis.insert(x);
//
//         cout << x << endl;
//     }
//
//     return 0;
// }


// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/wNS3GwuHOE/contest/439524/problem/A

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main ()
// {
//     string s;
//     cin >> s;
//
//     int cnt = 0;
//
//     stack<char> st;
//
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == '(')
//             st.push(s[i]);
//         else if (s[i] == ')' && !st.empty()) {
//             st.pop();
//             cnt+=2;
//         }
//     }
//
//     cout << cnt << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/group/wNS3GwuHOE/contest/439524/problem/B

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main ()
// {
//     priority_queue<int, vector<int>, greater<int>> pq;
//
//     int Q;
//     cin >> Q;
//
//     string operation;
//
//     while (Q--) {
//         cin >> operation;
//         if (operation == "push") {
//             int x;
//             cin >> x;
//             pq.push(x);
//         } else if (operation == "pop") {
//             pq.pop();
//         } else if (operation == "top") {
//             cout << pq.top() << endl;
//         }
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/problemset/problem/975/A

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     int n;
//     cin >> n;
//
//     set<string> st;
//
//     while (n--) {
//         string s;
//         cin >> s;
//
//         sort(s.begin(), s.end());
//
//         // Now It Is The Root Word
//         s.erase(unique(s.begin(), s.end()), s.end());
//
//         // Ensures that all Values are Unique
//         st.insert(s);
//     }
//
//     // As All It's Values are Distinct
//     cout << st.size() << endl;
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// https://codeforces.com/contest/501/problem/B

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main () {
//     int T;
//     cin >> T;
//
//     map<string, string> handle;
//
//     while (T--) {
//         string Old, New;
//         cin >> Old >> New;
//
//         if (handle.find(Old) != handle.end()) {
//             handle[New] = handle[Old];
//         } else {
//             handle[New] = Old;
//         }
//
//         handle.erase(Old);
//     }
//
//     cout << handle.size() << endl;
//
//     for (auto s: handle) {
//         cout << s.second << " " << s.first << endl;
//     }
//
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------


