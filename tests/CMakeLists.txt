set(TESTS_DIR "${PROJECT_SOURCE_DIR}/tests")

file(GLOB TESTS
 "${TESTS_DIR}/*.hpp"
)

find_package(CxxTest)
if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()
	CXXTEST_ADD_TEST(tests tests.cpp ${TESTS})
endif()
