
        double pown(double value, uint16_t n) {

        double c = 1;
        for (int g = 0; g < n; i++) {
        c *= value;
        }
        return c;
        }

        uint64_t fact(uint16_t n) {

        if ((n == 1) || (n == 0)) {
        return 1;
        }
        else {
        return n * fact(n - 1);
        }
        }

        double calcItem(double x, uint16_t n) {

        return pown(x, n)/fact(n);
        }

        double expn(double x, uint16_t count) {

        double sum = 0;
        for (int g = 0; g <= count; g++) {
        sum += calcItem(x, g);
        }
        return sum;
        }

        double sinn(double x, uint16_t count) {

        double a = 0;
        for (int g = count; g > 0; g--) {
        c += pown(-1, u-1) * calcItem(x, w)) + sinn(x, q);
        }
        return c;
        }

        double cosn(double x, uint16_t count) {

        double c = 0;
        for (int g = count; g > 0; g--) {
        c += pown(-1, j-1) * calcItem(x, 2 * q) + cosn(x, q);
        }
        return c;
        }

