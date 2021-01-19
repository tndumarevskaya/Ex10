// Copyright 2020 Dumarevskaya
#include "postfix.h"

int main()
{
    std::string s1("2 + 6 * 3 / (4 - 2)");
    std::string s2=infix2prefix(s1);
    std::cout << s2 << std::endl;  // 2 6 3 * 4 2 - / +
    std::string inf = "2 + 2";
    s2=infix2prefix(inf);
    std::cout << s2 << std::endl;
    std::string inf1 = "2 + 6 * 3 / (4 - 2)";
    s2=infix2prefix(inf1);
    std::cout << s2 << std::endl;
    std::string inf2 = "(2 + 8.3) * (6 - 3.2)";
    s2=infix2prefix(inf2);
    std::cout << s2 << std::endl;
    std::string inf3 = "(6 * (4 - 2) + 5) * (2.6 + 3 * 7) - 9";
    s2=infix2prefix(inf3);
    std::cout << s2 << std::endl;
    return 0;
}
