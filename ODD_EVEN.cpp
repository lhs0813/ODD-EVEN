#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string answer;
    if (num % 2 == 0) {
        answer = "Even";
    }
    else {
        answer = "Odd";
    }

    return answer;
}

int main(void) {
    int number;
    string confirm;
    cin >> number;
    confirm = solution(number);
    cout << confirm;
}