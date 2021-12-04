#ifndef CONSOLETEST_BOOLMATRIX_H
#define CONSOLETEST_BOOLMATRIX_H

#include <vector>

using namespace std;

class bool_matrix {
private:
    vector<vector<bool>> m;

    int x, y;

public:
    bool_matrix(unsigned int x, unsigned int y) : x(x), y(y) {
        m.resize(x, std::vector<bool>(y,0));
    }

    bool_matrix() : bool_matrix(0, 0) {}

    int xsize() { return x; }
    int ysize() { return y; }

    void set_safe(int vx, int vy, bool vv) {
        if (vx < 0 || vx >= x || vy < 0 || vy >= y) return;

        m[vx][vy] = vv;
    }

    bool get_safe(int vx, int vy, bool vd) {
        if (vx < 0 || vx >= x || vy < 0 || vy >= y) return vd;

        return m[vx][vy];
    }

    vector<bool>& operator[](unsigned int ox) {
        return m.at(ox);
    }
};


#endif //CONSOLETEST_BOOLMATRIX_H
