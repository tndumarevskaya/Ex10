// Copyright 2020 Dumarevskaya
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>

template <typename T>
class MyStack {
 private:
  size_t top = 0;
  size_t size = 10;
  T* next = nullptr;
 public:
  explicit MyStack(size_t);
  explicit MyStack(const MyStack<T> &);
  ~MyStack();
  T get() const;
  T pop();
  size_t getSize() const;
  void push(T);
  bool isFull() const;
  bool isEmpty() const;
};

template <typename T>
MyStack<T>::MyStack(size_t size) :size{ size } {
  next = new T[size];
};

template <typename T>
MyStack<T>::MyStack(const MyStack<T>& Stack) {
  size = Stack.getSize();
  next = new T[size];
  top = Stack.top;
  for (size_t i = 0; i < Stack.top; i++) {
    next[i] = Stack.next[i];
  }
}

template <typename T>
MyStack<T>::~MyStack() {
  delete[] next;
}

template <typename T>
inline T MyStack<T>::get() const {
  if (!isEmpty()) {
    return next[top - 1];
  }
}

template <typename T>
inline T MyStack<T>::pop() {
  if (!isEmpty()) {
    return next[--top];
  }
}

template <typename T>
inline size_t MyStack<T>::getSize() const {
  return size;
}

template <typename T>
inline void MyStack<T>::push(T value) {
  if (!isFull()) {
    next[top++] = value;
  }
}

template <typename T>
inline bool MyStack<T>::isFull() const {
  return top >= size;
}

template <typename T>
inline bool MyStack<T>::isEmpty() const {
  return top == 0;
}

#endif  // INCLUDE_MYSTACK_H_
