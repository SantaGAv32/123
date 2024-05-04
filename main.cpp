#include <vector>

std::vector<int> add_n_to_vector(std::vector<int> vec, int n) {
    for (int& i : vec) {
        i += n;
    }
    return vec;
}
