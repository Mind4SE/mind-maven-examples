
// -----------------------------------------------------------------------------
// Implementation of the primitive packagename.ComponentDefinitionTester.
// -----------------------------------------------------------------------------

#include <CUnit/CUnit.h>

void METH(test, testReturnZero)() {
	int result = CALL(c, returnZero)();
	CU_ASSERT_FALSE(result);
}
