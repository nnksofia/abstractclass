#include <iostream>

using namespace std;

class Base {
public:
    virtual double sum(int x) = 0;
};

class Progression : public Base {
private:
    double a;
    double diff;
public:
    Progression(double _a, double _diff) {
        a = _a;
        diff = _diff;
    }

    double sum(int n) {
        double sum = (n + 1) * (a + (a + n * diff)) / 2;
        return sum;
    }
};

class Vector : public Base {
private:
    double *v;
public:
    Vector(double *_v) {
        v = _v;
    }

    double sum(int j) {
        int sum = 0;
        for (int i = 0; i < j; i++) {
            sum = sum + v[i];
        }
        return sum;
    }
};

int main() {

    Base *base[3];

    Progression progression(1, 3);
    double v[3] = {1, 2, 3};
    Vector vector(v);

    base[0] = &progression;
    base[1] = &vector;

    base[2] = new Progression(2, 1);

    cout << base[0]->sum(2) << endl;
    return 0;
}
