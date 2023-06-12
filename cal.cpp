#include "cal.h"
#include <iostream>

void Calculator::addNumber(double num) {
    numbers.push_back(num);
}

double Calculator::calculate(char op) {
    double result = numbers[0];

    for (size_t i = 1; i < numbers.size(); i++) {
        switch (op) {
            case '+':
                result += numbers[i];
                break;
            case '-':
                result -= numbers[i];
                break;
            case '*':
                result *= numbers[i];
                break;
            case '/':
                if (numbers[i] != 0) {
                    result /= numbers[i];
                } else {
                    std::cout << "Tidak dapat melakukan pembagian dengan 0!" << std::endl;
                    return 0;
                }
                break;
            default:
                std::cout << "Operator yang dimasukkan tidak valid!" << std::endl;
                return 0;
        }
    }

    return result;
}

bool Calculator::isEmpty() {
    return numbers.empty();
}

