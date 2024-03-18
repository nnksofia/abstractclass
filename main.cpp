#include <fstream>
#include "header.h"
#include <iostream>

using namespace std;

int main() {
    testProgression();
    testVector();
    cout << "all tests passed successfully!" << endl;

    Base *base[2];

    ifstream inputFile("t.txt");
    if (!inputFile) {
        cerr << "unable to open file!" << endl;
        return 1;
    }

    double progressionA, progressionDiff;
    inputFile >> progressionA >> progressionDiff;

    Progression progression(progressionA, progressionDiff);

    double v[3];
    for (int i = 0; i < 3; ++i) {
        inputFile >> v[i];
    }

    Vector vector(v);

    base[0] = &progression;
    base[1] = &vector;

//    base[2] = new Progression(2, 1);

    int num1 = 0, num2 = 0;
    cout << "enter num of progression's numbers to sum" << endl;
    cin >> num1;

    cout << "enter num of vector's numbers to sum" << endl;
    cin >> num2;

    cout << "progression's sum: " << base[0]->sum(num1) << endl;
    cout << "vector's sum: " << base[1]->sum(num2) << endl;

    inputFile.close();

    return 0;
}
