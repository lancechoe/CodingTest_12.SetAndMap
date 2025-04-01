/*
문제
자연수를 원소로 갖는 공집합이 아닌 두 집합 A와 B가 있다. 이때, 두 집합의 대칭 차집합의 원소의 개수를 출력하는 프로그램을 작성하시오. 두 집합 A와 B가 있을 때, (A-B)와 (B-A)의 합집합을 A와 B의 대칭 차집합이라고 한다.

예를 들어, A = { 1, 2, 4 } 이고, B = { 2, 3, 4, 5, 6 } 라고 할 때,  A-B = { 1 } 이고, B-A = { 3, 5, 6 } 이므로, 대칭 차집합의 원소의 개수는 1 + 3 = 4개이다.

입력
첫째 줄에 집합 A의 원소의 개수와 집합 B의 원소의 개수가 빈 칸을 사이에 두고 주어진다. 둘째 줄에는 집합 A의 모든 원소가, 셋째 줄에는 집합 B의 모든 원소가 빈 칸을 사이에 두고 각각 주어진다. 각 집합의 원소의 개수는 200,000을 넘지 않으며, 모든 원소의 값은 100,000,000을 넘지 않는다.

출력
첫째 줄에 대칭 차집합의 원소의 개수를 출력한다.
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A_size, B_size, num;
    cin >> A_size >> B_size;

    unordered_set<int> A, B;

    // 집합 A 입력
    for (int i = 0; i < A_size; i++) {
        cin >> num;
        A.insert(num);
    }

    // 집합 B 입력
    for (int i = 0; i < B_size; i++) {
        cin >> num;
        B.insert(num);
    }

    int sym_diff_count = 0;

    // A - B 개수 세기
    for (int x : A) {
        if (B.find(x) == B.end()) {  // B에 없는 원소
            sym_diff_count++;
        }
    }

    // B - A 개수 세기
    for (int x : B) {
        if (A.find(x) == A.end()) {  // A에 없는 원소
            sym_diff_count++;
        }
    }

    cout << sym_diff_count << "\n";  // 최종 결과 출력

    return 0;
}
