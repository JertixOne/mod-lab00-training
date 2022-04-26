// Copyright 2022 UNN-IASR
#include "fun.h"
#include <math.h>
#include <iostream>

int64_t power(int64_t x, uint16_t n) {
   int y = 1;
    for (int i = 1; i <= n; i++)
        y *= x;
    return y;
}
