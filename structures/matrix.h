//
// Created by Myles Harris on 12/3/21.
//

#ifndef CONSOLETEST_MATRIX_H
#define CONSOLETEST_MATRIX_H

#include <vector>

using namespace std;

class matrix {
private:
    vector<vector<uint32_t>> m;

    int x, y;

public:
    matrix(unsigned int x, unsigned int y) : x(x), y(y) {
        m.resize(x, std::vector<uint32_t>(y,0));
    }

    matrix() : matrix(0, 0) {}

    int xsize() { return x; }
    int ysize() { return y; }

    void set_safe(int vx, int vy, uint32_t vv) {
        if (vx < 0 || vx >= x || vy < 0 || vy >= y) return;

        m[vx][vy] = vv;
    }

    uint32_t get_safe(int vx, int vy, uint32_t vd) {
        if (vx < 0 || vx >= x || vy < 0 || vy >= y) return vd;

        return m[vx][vy];
    }

    vector<uint32_t>& operator[](unsigned int ox) {
        return m.at(ox);
    }
};


#endif //CONSOLETEST_MATRIX_H
