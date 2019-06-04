//
// Created by mfbut on 5/14/2019.
//

#ifndef MATRIX_DIMENSIONMISMATCHERROR_H
#define MATRIX_DIMENSIONMISMATCHERROR_H

//used to signify that the operation requested to be
//performed on the matrix/vector cannot be done because
//they are not the same size
namespace Matrix {

  //should inherit from MatrixError
  class DimensionMismatchError{

  };
}

#endif //MATRIX_DIMENSIONMISMATCHERROR_H
