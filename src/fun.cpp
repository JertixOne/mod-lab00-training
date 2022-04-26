// Copyright 2022 UNN-IASR
#include "fun.h"
#include <math.h>
#include <iostream>

int64_t power(int64_t x, uint16_t n) {
   for (int i = 2; i < n; i++)
      x *= x;
    return x;
}
