// Copyright 2021 NNTU-CS

#include <gtest/gtest.h>
#include "alg.h"


TEST(ads-1, checkPrime1) {
   EXPECT_EQ(true, checkPrime(2));
}
TEST(ads-1, checkPrime2) {
   EXPECT_EQ(true, checkPrime(3));
}
TEST(ads-1, checkPrime3) {
   EXPECT_EQ(false, checkPrime(12));
}
TEST(ads-1, nPrime1) {
   unsigned long long res = nPrime(6);
   EXPECT_EQ(13, res);
}
TEST(ads-1, nPrime2) {
   unsigned long long res = nPrime(500);
   EXPECT_EQ(3571, res);
}
TEST(ads-1, nextPrime1) {
   unsigned long long res = nextPrime(1031);
   EXPECT_EQ(1033, res);
}
TEST(ads-1, nextPrime2) {
   unsigned long long res = nextPrime(3559);
   EXPECT_EQ(3571, res);
}
TEST(ads-1, nextPrime3) {
   unsigned long long res = nextPrime(2);
   EXPECT_EQ(3, res);
}
TEST(ads-1, sumPrime1) {
   unsigned long long res = sumPrime(2000000);
   unsigned long long expected = 142913828922;
   EXPECT_EQ(expected, res);
}
TEST(ads-1, sumPrime2) {
   unsigned long long res = sumPrime(10);
   unsigned long long expected = 17;
   EXPECT_EQ(expected, res);
}
