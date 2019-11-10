//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {
    float a, b, c, d;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if (d >= 0) {
        d = (-b + sqrt(b*b - 4*a*c))/2/a;
        c = (-b - sqrt(b*b - 4*a*c))/2/a;
        if(d == c) {cout << d;} else {if(d > c) {cout << c << " " << d;} else {cout << d << " " << c;}}}
};