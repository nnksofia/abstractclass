class Base {
public:
    virtual double sum(int x) = 0;
};

class Progression : public Base {
private:
    double a;
    double diff;
public:
    Progression(double, double);

    double sum(int);
};

class Vector : public Base {
private:
    double *v;
public:
    Vector(double *);

    double sum(int);
};


void testProgression();

void testVector();