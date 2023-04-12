double jarak(double x1, double y1, double x2, double y2) {
    double d1 = x2 -x1;
    double d2 = y2 - y1;
    double d = sqrt(d1 * d1 + d2 * d2);
    return d;
}
