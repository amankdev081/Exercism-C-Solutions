#include "10_hamming.h"

int compute(const char *lhs, const char *rhs) {
    int ham_dist = 0;

    for (int i = 0; ; ++i) {
        if (lhs[i] == '\0' && rhs[i] == '\0') {
            return ham_dist;
        }

        if (lhs[i] == '\0' || rhs[i] == '\0') {
            return -1;
        }
        
        if (lhs[i] != rhs[i]) {
            ++ham_dist;
        }
    }
}