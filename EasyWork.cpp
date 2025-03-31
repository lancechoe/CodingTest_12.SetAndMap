/*
문제
You are working in a ”Giigle” software company. The job in this company is very easy, so people don’t sit in the oﬃce from 9am till 6pm. They come to work at any time, and leave the oﬃce at any time. You have a magnetic keys system that keeps the log on all people – when they entered the oﬃce, and when they leaved. Your task is to ﬁnd all people that are in oﬃce now.

입력
The ﬁrst line of the input ﬁle contains n — the number of lines in input ﬁle (2 ≤ n ≤ 106). Each of the following n lines contain person name and word ”enter” if this person is entered, and ”leave” otherwise.

출력
Output names of all people that are in oﬃce now in anti-lexicographical order.
*/

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string name, status;
    unordered_set<string> employees;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> status;
        if (status == "enter") {
            employees.insert(name);
        } else {
            employees.erase(name);
        }
    }
    
    vector<string> presentEmployees(employees.begin(), employees.end());
    sort(presentEmployees.rbegin(), presentEmployees.rend());
    
    for (const string& person : presentEmployees) {
        cout << person << "\n";
    }
    
    return 0;
}