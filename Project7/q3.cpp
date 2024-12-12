#include <iostream>
using namespace std;
/* 3 While Loops */
 int main()
 { int i = 1; // initialize first 3 terms of the Fibonacci sequence
   int j = 2;
   int k = i+j;
   cout << i << ",";
   cout << j << ",";
   while (k <= 4000000){ // continue to calculate terms if not exceeding 4,000,000
    cout << k << ","; // print out current term, separated by ','
    i = j; // update terms
    j = k;
    k = i+j;
   }
   cout << endl; // end
 }