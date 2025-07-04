
/*Problem - 2: With a single integer as the input, generate the following until a = x[series of numbers as shown in below examples]

Output : (examples)
1) input a = 1, then output : 1
2) input a = 2, then output : 1, 3
3) input a = 3, then output : 1, 3, 5
4) input a = 4, then output : 1, 3, 5, 7
.
.
5) input a = x, then output : 1, 3, 5, 7, .......*/


//Solution for Problem-2.

#include <iostream>

static void printOddSeries(int a) {
    for (int i = 0; i < a; i++) {
        std::cout << 2 * i + 1;
        if (i != a - 1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}