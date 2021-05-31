#include <iostream>

int main(){

    int a = 3;
    int b = 2;
    float c = 2.0;

    std::cout << "a = " << a << ",\t";
    std::cout << "b = " << b << ",\t";
    std::cout << "c = " << c << std::endl;
    std::cout << std::endl;

    //四則計算など
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << std::endl;

    //剰余（あまり）
    std::cout << "a % b = " << a % b << std::endl;

    //計算に小数が含まれると答えも小数になる
    std::cout << "a / c = " << a / c << std::endl;

    //キャスト
    std::cout << "(cast)a / b = " << static_cast<float>(a) / b << std::endl;

    return 0;
}