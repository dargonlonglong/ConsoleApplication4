#include <iostream>
#include "Calculator.h"

// 構造函數與析構函數實作
Calculator::Calculator() {}
Calculator::~Calculator() {}

// 公共成員函數實作
double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        std::cerr << "錯誤: 除數不能為零。" << std::endl;
        return 0;
    }
}

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    // 提示用戶輸入
    std::cout << "輸入第一個數字: ";
    std::cin >> num1;
    std::cout << "輸入運算符 (+, -, *, /): ";
    std::cin >> op;
    std::cout << "輸入第二個數字: ";
    std::cin >> num2;

    // 根據運算符進行計算
    switch (op) {
    case '+':
        std::cout << "結果: " << calc.add(num1, num2) << std::endl;
        break;
    case '-':
        std::cout << "結果: " << calc.subtract(num1, num2) << std::endl;
        break;
    case '*':
        std::cout << "結果: " << calc.multiply(num1, num2) << std::endl;
        break;
    case '/':
        std::cout << "結果: " << calc.divide(num1, num2) << std::endl;
        break;
    default:
        std::cerr << "錯誤: 無效的運算符。" << std::endl;
        break;
    }

    return 0;
}
