#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../3d.h"

START_TEST(parser_array) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(parser_polygon) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  ck_assert_uint_eq(a.polygon[0], 0);
  ck_assert_uint_eq(a.polygon[1], 6);
  ck_assert_uint_eq(a.polygon[2], 6);
  ck_assert_uint_eq(a.polygon[3], 4);
  ck_assert_uint_eq(a.polygon[4], 4);
  ck_assert_uint_eq(a.polygon[5], 0);
  ck_assert_uint_eq(a.polygon[6], 0);
  ck_assert_uint_eq(a.polygon[7], 2);
  ck_assert_uint_eq(a.polygon[8], 2);
  ck_assert_uint_eq(a.polygon[9], 6);
  ck_assert_uint_eq(a.polygon[10], 6);
  ck_assert_uint_eq(a.polygon[11], 0);
  ck_assert_uint_eq(a.polygon[12], 0);
  ck_assert_uint_eq(a.polygon[13], 3);
  ck_assert_uint_eq(a.polygon[14], 3);
  ck_assert_uint_eq(a.polygon[15], 2);
  ck_assert_uint_eq(a.polygon[16], 2);
  ck_assert_uint_eq(a.polygon[17], 0);
  ck_assert_uint_eq(a.polygon[18], 0);
  ck_assert_uint_eq(a.polygon[19], 1);
  ck_assert_uint_eq(a.polygon[20], 1);
  ck_assert_uint_eq(a.polygon[21], 3);
  ck_assert_uint_eq(a.polygon[22], 3);
  ck_assert_uint_eq(a.polygon[23], 0);
  ck_assert_uint_eq(a.polygon[24], 2);
  ck_assert_uint_eq(a.polygon[25], 7);
  ck_assert_uint_eq(a.polygon[26], 7);
  ck_assert_uint_eq(a.polygon[27], 6);
  ck_assert_uint_eq(a.polygon[28], 6);
  ck_assert_uint_eq(a.polygon[29], 2);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(parser_info) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  ck_assert_uint_eq(a.indexV, 24);
  ck_assert_uint_eq(a.indexF, 72);
  ck_assert_float_eq_tol(a.maxV, 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(scale_test) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  scale(&a, 3);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 3, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 3, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(rotateX) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  rotate_x(&a, -2);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], -0.034899, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 0.999391, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 0.999391, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0.034899, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 0.964491, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1.034290, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[16], -0.034899, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 0.999391, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 0.999391, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0.034899, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 0.964491, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1.034290, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(rotateY) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  rotate_y(&a, 1);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], -0.017452, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 0.999848, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], -0.017452, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 0.999848, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 0.999848, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0.017452, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 0.982395, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1.017300, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 0.999848, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0.017452, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 0.982395, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1.017300, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(rotateZ) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  rotate_z(&a, 2.5);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0.043619, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 0.999048, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0.043619, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 0.999048, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 0.999048, 1e-6);
  ck_assert_float_eq_tol(a.array[13], -0.043619, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 0.999048, 1e-6);
  ck_assert_float_eq_tol(a.array[16], -0.043619, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 1.042668, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 0.955429, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 1.042668, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 0.955429, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(moveX) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  move_x(&a, 8);
  ck_assert_float_eq_tol(a.array[0], 1.6, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 1.6, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 1.6, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 1.6, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 2.6, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 2.6, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 2.6, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 2.6, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(moveY) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  move_y(&a, 4);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0.8, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0.8, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 1.8, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 1.8, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0.8, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0.8, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 1.8, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 1.8, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

START_TEST(moveZ) {
  info a;
  parserr("parser/test/cube_test.obj", &a);
  move_z(&a, 0);
  ck_assert_float_eq_tol(a.array[0], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[1], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[2], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[3], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[4], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[5], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[6], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[7], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[8], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[9], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[10], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[11], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[12], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[13], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[14], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[15], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[16], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[17], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[18], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[19], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[20], 0, 1e-6);
  ck_assert_float_eq_tol(a.array[21], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[22], 1, 1e-6);
  ck_assert_float_eq_tol(a.array[23], 1, 1e-6);
  free(a.array);
  free(a.polygon);
}
END_TEST

Suite *s21_3d_suite(void) {
  Suite *suite;

  suite = suite_create("s21_3d");
  TCase *tcase_core = tcase_create("Core");

  tcase_add_test(tcase_core, parser_array);
  tcase_add_test(tcase_core, parser_polygon);
  tcase_add_test(tcase_core, parser_info);
  tcase_add_test(tcase_core, scale_test);
  tcase_add_test(tcase_core, rotateX);
  tcase_add_test(tcase_core, rotateY);
  tcase_add_test(tcase_core, rotateZ);
  tcase_add_test(tcase_core, moveX);
  tcase_add_test(tcase_core, moveY);
  tcase_add_test(tcase_core, moveZ);

  suite_add_tcase(suite, tcase_core);

  return suite;
}

int main(void) {
  Suite *suite = s21_3d_suite();
  SRunner *suite_runner = srunner_create(suite);
  srunner_run_all(suite_runner, CK_VERBOSE);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);
  return (failed_count == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
