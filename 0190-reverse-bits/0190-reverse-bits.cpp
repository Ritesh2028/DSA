#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(int n) {
        uint32_t rev = 0;
        for (int i = 0; i < 32; i++) {
            int bit = n & 1;          // get LSB
            rev = (rev << 1) | bit;   // shift rev left and add bit
            n >>= 1;                   // shift n right
        }
        return rev;
    }
};
