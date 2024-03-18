#include <cassert>
#include "header.h"
#include <cmath>


void testProgression() {
    Progression progression(1, 3);

    // test sum method for various inputs
    assert(progression.sum(0) == 1);
    assert(progression.sum(1) == 5);
    assert(progression.sum(2) == 12);
    assert(progression.sum(3) == 22);
    assert(progression.sum(4) == 35);
}

void testVector() {
    double v[3] = {1, 2, 3};
    Vector vector(v);

    // test sum method for various inputs
    assert(vector.sum(0) == 0);
    assert(vector.sum(1) == 1);
    assert(vector.sum(2) == sqrt(pow(1, 2)+pow(2, 2)));
    assert(vector.sum(3) == sqrt(pow(1, 2)+pow(2, 2)+pow(3, 2)));
}

