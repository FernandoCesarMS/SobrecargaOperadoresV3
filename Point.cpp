#include <iostream>
#include "Point.h"
#include <string>
std::ostream & operator << (std::ostream &out, const Point &p) {
    string op;

    op = "(";
    op += p.x;
    op += op + ", ";
    op += p.y;
    op += op + ")";
    out << op;

    return out;
}
std::istream & operator >> (std::istream &in, Point &p) {
    in >> p.x;
    in >> p.y;

    return in;
}
Point Point::operator + (const Point &p) {
    double somaX, somaY;

    somaX = x+p.x;
    somaY = y+p.y;

    Point pontoRetornado(somaX,somaY);

    return pontoRetornado;
}
Point& Point::operator += (const Point &p) {
    double somaX, somaY;

    somaX = x+p.x;
    somaY = y+p.y;

    Point pontoRetornado(somaX,somaY);

    x = somaX;
    y = somaY;

    return pontoRetornado;
}