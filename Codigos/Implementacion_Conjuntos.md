# Aplicacion de conjuntos en c++ con Set
# Union-Interseccion

```
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;

        set<int> A, B, C;

        for (int j = 0; j < N; ++j) {
            int element;
            cin >> element;
            A.insert(element);
        }

        for (int j = 0; j < N; ++j) {
            int element;
            cin >> element;
            B.insert(element);
        }

        for (int j = 0; j < N; ++j) {
            int element;
            cin >> element;
            C.insert(element);
        }

        set<int> unionAB, unionBC, intersectionAB, intersectionABC;

        set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(unionAB, unionAB.begin()));
        for (auto it = unionAB.begin(); it != unionAB.end(); ++it) {
            cout << *it;
            if (next(it) != unionAB.end()) {
                cout << " ";
            }
        }
        cout << endl;

        set_union(B.begin(), B.end(), C.begin(), C.end(), inserter(unionBC, unionBC.begin()));
        for (auto it = unionBC.begin(); it != unionBC.end(); ++it) {
            cout << *it;
            if (next(it) != unionBC.end()) {
                cout << " ";
            }
        }
        cout << endl;

        set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(intersectionAB, intersectionAB.begin()));
        for (auto it = intersectionAB.begin(); it != intersectionAB.end(); ++it) {
            cout << *it;
            if (next(it) != intersectionAB.end()) {
                cout << " ";
            }
        }
        cout << endl;

        set_intersection(unionAB.begin(), unionAB.end(), unionBC.begin(), unionBC.end(), inserter(intersectionABC, intersectionABC.begin()));
        for (auto it = intersectionABC.begin(); it != intersectionABC.end(); ++it) {
            cout << *it;
            if (next(it) != intersectionABC.end()) {
                cout << " ";
            }
        }
        cout << endl;

        set<int> intersectionAC;
        set_intersection(A.begin(), A.end(), C.begin(), C.end(), inserter(intersectionAC, intersectionAC.begin()));
        set<int> unionIntersection;
        set_union(intersectionAB.begin(), intersectionAB.end(), intersectionAC.begin(), intersectionAC.end(), inserter(unionIntersection, unionIntersection.begin()));
        for (auto it = unionIntersection.begin(); it != unionIntersection.end(); ++it) {
            cout << *it;
            if (next(it) != unionIntersection.end()) {
                cout << " ";
            }
        }
        cout << endl << endl;
    }

    return 0;
}

```
