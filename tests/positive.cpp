//
// Created by Клим on 13.04.2023.
//
#define BOOST_TEST_MODULE EXCEPTIONS
#include <boost/test/unit_test.hpp>
#include <SQUEERR.h>
BOOST_AUTO_TEST_CASE(exceptions) {
    int sample = 1;
    int expected = 1;
    BOOST_ASSERT(suare(sample) == expected);
    BOOST_CHECK_EQUAL(suare(sample),expected);
}
BOOST_AUTO_TEST_CASE(exceptions2) {
    int sample = 1;
    int expected = 1;
    BOOST_ASSERT(suare(sample) == expected);
    BOOST_CHECK_EQUAL(suare(sample),expected);
}