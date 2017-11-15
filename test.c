#include "unity/src/unity.h"
void test_Substraction() {
  TEST_ASSERT_EQUAL(5, cSub(10,5));
  TEST_ASSERT_EQUAL(5, cSub(15,10));
  TEST_ASSERT_EQUAL(-10, cSub(-15,-5));
}


void test_Addition() {
  TEST_ASSERT_EQUAL(5, cAdd(2,3));
  TEST_ASSERT_EQUAL(23, cAdd(13,10));
  TEST_ASSERT_EQUAL(120, cAdd(20,100));
}
void test_Multiplication() {
  TEST_ASSERT_EQUAL(6, cMul(2,3));
  TEST_ASSERT_EQUAL(130, cMul(13,10));
  TEST_ASSERT_EQUAL(2000, cMul(20,100));
}
void test_Division() {
  TEST_ASSERT_EQUAL(2, cDiv(6,3));
  TEST_ASSERT_EQUAL(1, cDiv(10,10));
  TEST_ASSERT_EQUAL(5, cDiv(100,20));
}



int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_Substraction);
  RUN_TEST(test_Addition);
  RUN_TEST(test_Multiplication);
  RUN_TEST(test_Division);
  return UNITY_END();
}
