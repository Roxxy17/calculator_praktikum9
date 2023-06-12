#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>

class Calculator {
private:
    std::vector<double> numbers;

public:
    void addNumber(double num);
    double calculate(char op);
    bool isEmpty();
};

#endif  // CALCULATOR_H

