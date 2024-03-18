#include "header.h"
#include "cmath"


Progression::Progression(double _a, double _diff) {
    a = _a;
    diff = _diff;
}

double Progression::sum(int n) {
    double sum = (n + 1) * (a + ((a + n * diff))) / 2;
    return sum;
}


Vector::Vector(double *_v) {
    v = _v;
}

double Vector::sum(int j) {
    double sum = 0;
    for (int i = 0; i < j; i++) {
        sum = sum + pow(v[i], 2);
    }
    return sqrt(sum);
}

