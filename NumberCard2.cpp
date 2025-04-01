/*
문제
숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.
*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, num;
    cin >> N;

    unordered_map<int, int> cardCount;

    // 숫자 카드 개수 세기
    for (int i = 0; i < N; i++) {
        cin >> num;
        cardCount[num]++;  // 해당 숫자의 개수 증가
    }

    cin >> M;
    vector<int> result(M);  // 결과 저장할 벡터

    // M개의 숫자 쿼리 처리
    for (int i = 0; i < M; i++) {
        cin >> num;
        result[i] = cardCount[num];  // 벡터에 저장
    }

    // 한 번에 출력
    for (int i = 0; i < M; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";  // 마지막 개행 추가

    return 0;
}
