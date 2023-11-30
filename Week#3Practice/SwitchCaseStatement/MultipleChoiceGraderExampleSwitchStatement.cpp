
#include <iostream>
using namespace std;

int main() {

    int studentAnswer = 3;
    string feedback1 = "This answer is wrong because....";
    string feedback2 = "This answer is correct! You know this because...";
    string feedback3 = "This answer is wrong. While the first part is correct...";
    string feedback;

    int correctAnswer = 2;
    int points = 0;

    switch (studentAnswer) {
        case 1: feedback = feedback1; break;
        case 2: feedback = feedback2; break;
        case 3: feedback = feedback3; break;
        default: feedback = "Invalid answer choice";
    }

    cout << feedback << endl;

    return 0;

}