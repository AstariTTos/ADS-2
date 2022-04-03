// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
  double res = 1;
  for (int g = 1; g <= n; g++) {
    res *= value;
  }
  return res;
}
uint64_t fact(uint16_t n) {
  if (n <= 1)
    return 1;
  else
    return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
  double num;
  num = pown(x, n) / fact(n);
  return num;
}
double expn(double x, uint16_t count) {
  double e = 0;
  int g = 0;
  while (g <= count) {
    e += calcItem(x,g);
    e += calcItem(x, g);
    g++;
  }
  return e;
}
double sinn(double x, uint16_t count) {
  double sinc = 0;
  int g = 1;
  while (g <= count) {
    sinc += pown(-1, (g - 1)) * calcItem(x, (2 * g - 1));
    i++;
  }
  return sinc;
}
double cosn(double x, uint16_t count) {
  double cosc = 0;
  int g = 1;
  while (g <= count) {
    cosc += pown(-1, (g - 1)) * calcItem(x, (2 * g - 2));
    g++;
  }
  return cosc;

