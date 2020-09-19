
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include "banking_headers.h"
#define PROJECT_NAME    "bankingsystem"

/* Prototypes for all the test functions */
void test_banking(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "banking", test_banking);
  //CU_add_test(suite, "not prime", test_notprime);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_banking(void) {
    CU_ASSERT(1 == logout())
    /* Checking for correct name*/
    CU_ASSERT(1 == name_check("Sai lakshmi"))
    CU_ASSERT(0 == name_check("Sai lakshmi nag venkata rama das bindu chandu shahna shilpa"))
   /* Checking for correct PAN number*/
    CU_ASSERT(0 == PAN_number_check("fr4156asef"))
    CU_ASSERT(1 == PAN_number_check("etjsd9641"))
/*Checking for correct amount*/
    CU_ASSERT( 0 == amount_check(0))
    CU_ASSERT( 0 == amount_check(-87))
    CU_ASSERT( 1 == amount_check(52222))

    /*Checking for correct account number from user*/
    CU_ASSERT( 0 == account_number_check(0))
    CU_ASSERT( 0 == account_number_check(-785))
    CU_ASSERT( 1 == account_number_check(12547))
    CU_ASSERT( 0 == account_number_check(147))
    CU_ASSERT( 0 == account_number_check(78541269))
    /*Checking for valid password*/
    CU_ASSERT( 0 == password_check(""))
    CU_ASSERT( 0 == password_check("124"))
    CU_ASSERT( 0 == password_check("74sde7as1vd4f2r"))

}

