#include <iostream>
#include <vector>

int linearsearch(std::vector<int> array, int target) {
    for (int i = 0; i < array.size(); ++i) {
        if (target == array[i]) {
            return i;
        }      
    } 
    return -1;
}

int main() {
    std::vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    std::cout << linearsearch(array, 3) << '\n';
    std::cout << linearsearch(array, 9) << '\n';
    std::cout << linearsearch(array, 12) << '\n';
    return 0;
}