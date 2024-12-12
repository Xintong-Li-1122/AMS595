#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

/*      2 Printing a Vector       */
void print_vector(std::vector<int> v) {
    cout << "["; 
    for (int i = 0; i < v.size()-1; i++){ // loop through and print out every element
        cout <<  v[i] << ","; // separated by ,
    }
    cout << v.back() << "]" << endl; // start and end the vector with []
}

/*           4 Functions       */
/* 4.1 If Prime */
bool isprime(int n) {
bool result;
    result = true; // initialize result to be true, if n is not divisible by any number from 2 to sqrt(n), prime 
 // not prime if the number is smaller than 2 
    if (n <= 1){
        result = false; 
    }
    // if number larger than 1, check if it is divisible by any number from 2 to sqrt(n)
    else {
        // initialize the counter i to be 2
        for (int i = 2; i <= std::sqrt(n); ++i) {
        // If n is divisible by i, not prime
            if (n % i == 0) {
                result =  false;
                break;
            }
        }   
        }
 return result;
}

// define test cases
void test_isprime() {
 std::cout << "isprime(2) = " << isprime(2) << '\n';
 std::cout << "isprime(10) = " << isprime(10) << '\n';
 std::cout << "isprime(17) = " << isprime(17) << '\n';
}

/* Question 4.2 */
std::vector<int> factorize(int n) {
std::vector<int> answer;
    for (int i = 1; i <= n; ++i) { // loop through all possible factors of n: from 1 to n
    if (n%i==0) {
        answer.push_back(i); // if n is divisible for i, append i to answer
        }
    }
 return answer;
 }

// define test cases  
void test_factorize() {
 print_vector(factorize(2));
 print_vector(factorize(72));
 print_vector(factorize(196));
 }


// 4.3 Prime Factorization 
std::vector<int> prime_factorize(int n) {
std::vector<int> answer;
for (int i = 2; i <= n; ++i) { // loop through all possible prime factors of n: from 2 to n
    if (n%i==0 && isprime(i)) {
        answer.push_back(i); // if n is divisible by i and i is prime, append i to answer
        }
    }
return answer;
}

// define test cases  
void test_prime_factorize() {
print_vector(prime_factorize(2));
print_vector(prime_factorize(72));
print_vector(prime_factorize(196));
}


/*         5 Recursive Functions and Loops         */
// pascall triangle using  iteration
void pascal_by_iteration(int n) {
std::vector<int> prev={1}; // inintialize the 1st row
print_vector(prev); // print 1st row
for (int row = 2; row <= n; ++row) { // for each row, calculate current row and update previous row
    std::vector<int> cur_row={1}; //initialize current row to be [1]
    for (int i = 0; i < prev.size()-1; ++i){
            cur_row.push_back(prev[i]+prev[i+1]); // add sum of consecutive numbers in previous row to current row
    }
    cur_row.push_back(1);  // end current row with 1
    print_vector(cur_row); // print out current row
    prev = cur_row; // update previous row
}
}

// check all test cases
int main() 
{   cout << "Question 2 test cases: " << endl;
    std::vector<int> v={1,2,3,4};
    print_vector(v);
    cout << "4.1 test cases: " << endl;
    test_isprime();
    cout << "4.2 test cases: " << endl;
    test_factorize();
    cout << "4.3 test cases: " << endl;
    test_prime_factorize();
    cout << "Question 5 test case: " << endl;
    pascal_by_iteration(6);
}