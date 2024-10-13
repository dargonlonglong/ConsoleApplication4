#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // 構造函數與析構函數
    Calculator();
    ~Calculator();

    // 公共成員函數
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
};

#endif // CALCULATOR_H
#pragma once
