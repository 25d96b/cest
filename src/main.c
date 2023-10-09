#include "ANSI-color-codes.h"
#include <stdbool.h>
#include <stdio.h>
// typedef struct test_r {
//   bool pass;
// } test_r;
//
// struct test {
//   char *description; // decscribe the test
//   bool expect;       // expression
//   bool toBe;         // expected_output
//   test_r result;     // test result
// };
//
int sum(int a, int b) { return a + b; }

bool test(char *description, int expr, int expected) {
  expr == expected
      ? printf(BBLK GRNB " PASS " reset " %s\n✓ %s\n\n", __FILE__, description)
      : printf(BBLK REDB " FAIL " reset " %s\n✖ %s\n\n", __FILE__, description);
  return expr == expected;
}

int main() {
  test("Adds 1 + 2 should return 3", sum(1, 2), 3);
  test("Adds 2 + 2 should return 3", sum(2, 2), 3);
  return 0;
}
