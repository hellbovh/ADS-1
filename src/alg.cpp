// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t i = 2; i * i <= value; i++)
    if ((value % i) == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t result = 0;
  uint64_t num = 2;
  while (n > 0) {
    if (checkPrime(num)) {
      n--;
      result = num;
    }
    num++;
  }
  return result;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t result = value + 1;
  while (checkPrime(result) != true)
    result++;
  return result;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t summary = 0;
  uint64_t num = 1;
  while (num < hbound) {
    if (checkPrime(num))
      summary += num;
    num++;
  }
  return summary;
}
