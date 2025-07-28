#include <iostream>

int main() {
    int numExpressions;
    std::cin >> numExpressions;

    int x = 0;

    for (int i = 0; i < numExpressions; i++) {
        std::string expression;
        std::cin >> expression;

        if (expression == "++X" || expression == "X++") {
            x++;
        }
        else if (expression == "--X" || expression == "X--") {
            x--;
        }
    }

    std::cout << x;

    return 0;
}
