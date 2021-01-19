// Copyright 2020 Dumarevskaya
#include "postfix.h"

std::string infix2prefix (std::string s1) {
 	MyStack<char> st(100);
 	std::string s2;
 	for (int i = 0; i < s1.length(); i++) {
				if (s1[i] >= '0' && s1[i] <= '9') {
						while (s1[i] >= '0' && s1[i] <= '9' || s1[i] == '.') {
						 	s2 += s1[i];
								i++;
						}
						i--;
						s2 += ' ';
				} else if (s1[i] == '(') {
					 st.push(s1[i]);
				} else if (s1[i] == '*' || s1[i] == '/') {
					 if (st.isEmpty()) {
						  st.push(s1[i]);
					 } else if (st.get() == '*' || st.get() == '/') {
							 s2 += st.pop();
								s2 += ' ';
						  st.push(s1[i]);
						} else {
							 st.push(s1[i]);
						}
				} else if (s1[i] == '+' || s1[i] == '-') {
				 	if (!st.isEmpty() && st.get() != '(') {
							 s2 += st.pop();
								s2 += ' ';
					 }
						st.push(s1[i]);
				}	else if (s1[i] == ')') {
					 while (st.get() != '(') {
							 s2 += st.pop();
								s2 += ' ';
					 } 
						st.pop();
				}
	 }
		while (!st.isEmpty()) {
			 s2 += st.pop();
			 s2 += ' ';
		}
		s2.erase(s2.length() - 1);
		return s2;
}