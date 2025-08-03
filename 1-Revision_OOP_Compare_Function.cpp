// #include <bits/stdc++.h>
// #define ll long long;
//
// using namespace std;
//
// struct Student {
// private:
//     bool graduated;
//
// public:
//     string name;
//     int age;
//     float gpa;
//
//     Student() { cout << "Default Constructor Created\n"; }
//     Student(string n, int a, float g) : name(n), age(a), gpa(g) {}
//     // ======
//     // Student(string n, int a, float g) {
//     //     name = n;
//     //     age = a;
//     //     gpa = g;
//     //     graduated = 0;
//     // }
//     void setGraduated(bool x) {
//         graduated = x;
//     }
//     bool getGraduated() {
//         return graduated;
//     }
//
//     // Operator Overloading ??
//     bool operator < (const Student &other) const {
//         return age < other.age;
//     }
//     bool operator > (const Student &other) const {
//         return age > other.age;
//     }
//     // bool operator == (const Student &other) const {
//     //     return age == other.age;
//     // }
// };
//
// int main () {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//
//     Student st("Shwa", 19, 9.9), st2;
//     st.setGraduated(1);
//     // st.name = "Shwa";
//     // st.age = 19;
//     // st.gpa = 9.9;
//
//     cout << st.name << " " << st.age << " " << st.gpa << " " << st.getGraduated() << endl;
//
//     Student st3[5];
//     st3[0].age = 5;
//     st3[1].age = 9;
//
//     if (st3[0] > st3[1])
//         cout << "Second Is Greater" << endl;
//     else
//         cout << "First Is Greater" << endl;
//
//     Student st4[5];
//
//     st4[0] = Student("Shwa", 19, 9.9);
//     st4[1] = Student("Mohamed", 20, 9.8);
//     st4[2] = Student("Merna", 16, 9.7);
//     st4[3] = Student("Malak", 17, 9.6);
//     st4[4] = Student("Salma", 22, 9.5);
//
//     sort(st4, st4 + 5);
//
//     for (auto it: st4)
//         cout << it.name << endl;
//
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

//// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/K

// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Person {
//     string name;
//     int salary;
//
//     bool operator < (const Person &other) const {
//         if (salary == other.salary) { return name < other.name; }
//         return salary > other.salary;
//     }
// };
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//
//     int N;
//     cin >> N;
//
//     Person p[N];
//
//     for (int i = 0; i < N; i++)
//         cin >> p[i].name >> p[i].salary;
//
//     sort(p, p + N);
//
//     for (auto [name, salary]: p)
//         cout << name << " " << salary << endl;
//
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

//// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/J

// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Friends {
//     string name;
//     int A, M, S, E, tot;
//
//     void SetTotal() {
//         tot = A + M + S + E;
//     }
//
//     bool operator < (const Friends &other) const {
//         if (tot == other.tot)
//             return name < other.name;
//
//         return tot > other.tot;
//     }
// };
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//
//     int N;
//     cin >> N;
//
//     Friends fr[N];
//
//     for (int i = 0; i < N; i++) {
//         cin >> fr[i].name >> fr[i].A >> fr[i].M >> fr[i].S >> fr[i].E;
//         fr[i].SetTotal();
//     }
//
//     sort(fr, fr + N);
//
//     for (auto f : fr) {
//         cout << f.name << " " << f.tot << " " << f.A << " " << f.M << " " << f.S << " " << f.E << endl;
//     }
//
//     return 0;
// }

// Try To Use Compare Function So Easy With The Same Problem ??

// #include <bits/stdc++.h>
//
// using namespace std;
//
// struct Friends {
//     string name;
//     int A, M, S, E, tot;
//
//     void SetTotal() {
//         tot = A + M + S + E;
//     }
// };
//
// bool compare (Friends &f1, Friends &f2) {
//     if (f1.tot == f2.tot)
//         return f1.name < f2.name;
//
//     return f1.tot > f2.tot;
// }
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//
//     int N;
//     cin >> N;
//
//     Friends fr[N];
//
//     for (int i = 0; i < N; i++) {
//         cin >> fr[i].name >> fr[i].A >> fr[i].M >> fr[i].S >> fr[i].E;
//         fr[i].SetTotal();
//     }
//
//     // Then Pass The Compare Function as a Third Param To Sort Func ??
//     sort(fr, fr + N, compare);
//
//     for (auto f : fr) {
//         cout << f.name << " " << f.tot << " " << f.A << " " << f.M << " " << f.S << " " << f.E << endl;
//     }
//
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------
