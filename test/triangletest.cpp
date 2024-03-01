#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;


TEST(TriangleTest, testPerimeter1) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}

TEST(TriangleTest, testPerimeter) {
    Triangle *aTriangle = new Triangle(5,4,3);
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_GT (aTriangle->getPerimeter(),11);
}

TEST(TriangleTest, testArea1) {
    Triangle *aTriangle = new Triangle(9,8,7);
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_DOUBLE_EQ (aTriangle->getArea(),26.832815729997478);
}

TEST(TriangleTest, testArea2) {
    Triangle *aTriangle = new Triangle(5,4,3);
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_EQ (aTriangle->getArea(),6);
}

TEST(TriangleTest, testArea3) {
    Triangle *aTriangle = new Triangle(13,12,5);
    ASSERT_NE(aTriangle, nullptr);
    ASSERT_LT (aTriangle->getArea(),35);
}

TEST(TriangleTest, testKindEquilateral) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_NE(aTriangle, nullptr);
    Triangle::Kind result = aTriangle->getKind();
    EXPECT_EQ(result, Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTest, testDeathConstructorUno) {
    EXPECT_DEATH(Triangle(3,4,5), "First side is not the longest");
}

TEST(TriangleTest, testIsEquilateral) {
    Triangle *aTriangle = new Triangle(3,3,3);
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_TRUE(aTriangle->isEquilateral());
}

TEST(TriangleTest, testKindIsosceles) {
    Triangle *aTriangle = new Triangle(3,2,2);
    ASSERT_NE(aTriangle, nullptr);
    Triangle::Kind result = aTriangle->getKind();
    EXPECT_EQ(result, Triangle::Kind::ISOSCELES);
}

TEST(TriangleTest, isNotIsosceles) {
    Triangle triangle(9, 8, 7);
    EXPECT_FALSE(triangle.isIsosceles());
}

TEST(TriangleTest, testKindScalene) {
    Triangle *aTriangle = new Triangle(5,4,3);
    Triangle::Kind result = aTriangle->getKind();
    ASSERT_NE(aTriangle, nullptr);
    EXPECT_EQ(result, Triangle::Kind::SCALENE);
}

