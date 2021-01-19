// Copyright 2020 Dumarevskaya
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  st.push(23);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(23);
  EXPECT_EQ(23, st.pop());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(23);
  st.push(56);
  st.pop();
  EXPECT_EQ(23, st.pop());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(23);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(2);
  st.push(23);
  st.push(56);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(5);
  st.push(23);
  st.push(56);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  EXPECT_EQ(5, st.getSize());
}

TEST(MyStackTest, test9) {
  MyStack<double> st(5);
  st.push(23.2);
  st.push(45.3);
  st.push(12.5);
  st.pop();
  EXPECT_DOUBLE_EQ(45.3, st.pop());
}

TEST(MyStackTest, test10) {
  MyStack<char> st(5);
  st.push('a');
  st.push('b');
  EXPECT_EQ('b', st.pop());
}
