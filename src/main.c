#include <stdbool.h>
#include <stdio.h>

#define BBLK "\033[1;30m" // Bold Black
#define REDB "\033[41m"   // Red BG
#define GRNB "\033[42m"   // Green BG
#define CRESET "\033[0m"  // Reset text to normal

#define PASS_FMT_MSG(description)                                              \
  printf(BBLK GRNB " PASS " CRESET " %s\n✓ %s\n\n", __FILE__, description)

#define FAIL_FMT_MSG(description)                                              \
  printf(BBLK REDB " FAIL " CRESET " %s\n✖ %s\n\n", __FILE__, description)

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
// Maybe we should store a test_state type?
//
// typedef enum State {
//  RUNNING, // When implementing multi-thread
//  PASS,
//  FAIL
// } State
//
// // Maybe a union? the test could be in only one state at a time.
// typedef struct test_state {
//    State state;
// } test_state

int sum(int a, int b) { return a + b; }

bool test(char *description, int expr, int expected) {
  expr == expected ? PASS_FMT_MSG(description) : FAIL_FMT_MSG(description);
  return expr == expected;
}

int main() {
  test("Adds 1 + 2 should return 3", sum(1, 2), 3);
  test("Adds 2 + 2 should return 3", sum(2, 2), 3);
  return 0;
}
