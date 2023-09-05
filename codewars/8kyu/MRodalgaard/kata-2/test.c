#include <stdlib.h>
#include <criterion/criterion.h>

char *are_you_playing_banjo(const char *);

void do_test(char *testCase, char *expected)
{
  char *actual = are_you_playing_banjo(testCase);
  cr_assert_str_eq(actual, expected);

  free(actual);
}

Test(sample_tests, should_pass_all_the_tests_provided)
{
  do_test("Martin", "Martin does not play banjo");
  do_test("Rikke", "Rikke plays banjo");
  do_test("bravo", "bravo does not play banjo");
  do_test("rolf", "rolf plays banjo");
}