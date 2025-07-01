
/*Problem - 4: Get the total count of number listed in the dictionary which is multiple of[1, 2, 3, 4, 5, 6, 7, 8, 9]
(examples)
input: [1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30]
Output :
{1: 11, 2 : 8, 3 : 4, 4 : 4, 5 : 3, 6 : 2, 7 : 0, 8 : 1, 9 : 1}*/


// Solution to Problem-4.

#include <iostream>
#include <vector>
#include <map>

static std::map<int, int> countMultiples(const std::vector<int>& nums) {
    std::map<int, int> result;

    // Initialize map with 0 for keys 1 to 9
    for (int i = 1; i <= 9; ++i) {
        result[i] = 0;
    }

    // Count how many numbers are divisible by each i from 1 to 9
    for (int num : nums) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                result[i]++;
            }
        }
    }

    return result;
}