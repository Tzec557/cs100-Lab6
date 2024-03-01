#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(MathTest, Square) {
    ASSERT_EQ(TestSubject::square(2), 4);
    ASSERT_EQ(TestSubject::square(3), 9);
}

TEST(TestSubjectTest, squareNegativeNumber) {
    ASSERT_LT(TestSubject::square(-3), 10);  
}

TEST(TestSubjectTest, squareOddNumber) {
    ASSERT_NE(TestSubject::square(7), 50); 
}

TEST(TestSubjectTest, isEvenValidInput1) {
    EXPECT_TRUE(TestSubject::isEven(6));  
}

TEST(TestSubjectTest, isEvenValidInput2) {
    ASSERT_FALSE(TestSubject::isEven(15));  
}

TEST(TestSubjectTest, isEvenInvalidInput) {
    EXPECT_THROW(TestSubject::isEven(2.2), std::invalid_argument);  
}