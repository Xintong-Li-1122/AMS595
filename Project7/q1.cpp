#include <iostream>
using namespace std;

/* 1 Conditional Statements */
int main(){
int n;
cout << "Enter a number: ";
cin >> n;
switch (n){
   case -1:
   cout << "negative one" << endl;
   break;
   case 0:
   cout << "zero" << endl;
   break;
   case 1:
   cout << "positive one" << endl;
   break;
   default:
   cout << "other values" << endl;
 }
 }