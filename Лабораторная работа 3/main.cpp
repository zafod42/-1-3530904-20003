#include <iostream>

void check(double num) {
    if (!std::cin) {
        std::cout << "Elements of sequence must be an integer. End of the program.\n";
        exit(-1);
    }
    if (int(num) != num) {
        std::cout << "Elements of sequence must be an integer. End of the program.\n";
        exit(-1);
    }
}

int main() {
    double num = 0;
    int previousNum = 0, count = 0, N = 0;
    std::cout << "Input a sequence: ";
    std::cin >> num;
    check(num);
    if (num == 0) {
        std::cout << "Sequence can not be empty. End of the program.\n";
        exit(-1);
    }
    ++N;
    while (num != 0) {
        previousNum = num;
        std::cin >> num;
        check(num);
        if (N < 2 && num == 0) {
            std::cout << "Sequence must contain at least 2 elements. End of the program.\n";
            exit(-1);
        }
        if (num != 0) {
            ++N;
            if ((int)num % previousNum == 0) {
                ++count;
            }
        }
    }
    std::cout << "Number of elements divisible by the previous: " << count << '\n';
    return 0;
}