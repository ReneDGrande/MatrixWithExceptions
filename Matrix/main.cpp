//
// Created by george on 6/4/19.
//

#include "Matrix.h"

int main(){
    Matrix::Matrix m1(4,4,3);
    Matrix::Matrix m2(2,2,3);
    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;

    m2 = m2 /0;
   // Matrix::Matrix m3 = m1 + m2;

 //   std::cout << m3 << std::endl;

    return 0;
}