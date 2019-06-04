//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_MATRIXINNERDIMENSIONMISMATCHERROR_H
#define MATRIX_MATRIXINNERDIMENSIONMISMATCHERROR_H

//used to signify that the operation requested
//to be performed on matrices cannot be done
//because their inner dimensions don't match
//The inner dimensions would be the columns of A
//And the rows of B in A OP B
//Checked for in matrix multiplication
namespace Matrix {

  //should inherit from MatrixDimensionMismatchError
  class MatrixInnerDimensionMismatchError {

  };
}

#endif //MATRIX_MATRIXINNERDIMENSIONMISMATCHERROR_H
