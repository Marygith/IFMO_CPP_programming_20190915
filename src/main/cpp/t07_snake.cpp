//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>


using namespace std;

int t07_snake() {
  int n = 0, m = 0, s = 0, q = 1;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {if (i%2 == 0) {
  for (int k = 0; k < m; k++)
  {s++;
  a[i][k] = s;  
  }}
  else {
    for (int k = m-1; k >= 0; k--)
  {s++;
  a[i][k] = s;  
  }
  }
  }
  for (int i = 0; i < n; i++)
  {for (int k = 0; k < m; k++) {cout << a[i][k] << " ";} cout << endl; }     
    return 0;
}