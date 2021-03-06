#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*****************************************************************************************/
// Project Euler #1: Multiples of 3 and 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below N.
//
// Constraints:
// T: number of test cases
// 1 <= T <= 10^5
// 1 <= N <= 10^9
//
// We could make use of Sum of Arithmetic Progression to determine the sum of multiples of
// 3, 5 and 15 (multiples of 3 and 5) below N.
//
// Sum of multiples of 3 or 5 
// = Sum of multiples of 3 + Sum of multiples of 5 - Sum of multiples of 15
/******************************************************************************************/

unsigned long int sum_multiples(unsigned long int x) {
    
    unsigned long int sum_3, sum_5, sum_15;
    unsigned long int n1, n2, n3;
    
    // sum of multiples of 3
    n1 = (x-1)/3;
    sum_3 = 3*(n1)*(n1+1)/2;
    
    
    // sum of multiples of 5
    n2 = (x-1)/5;
    sum_5 = 5*(n2)*(n2+1)/2;
    
    // sum of multiples of 15
    n3 = (x-1)/15;
    sum_15 = 15*(n3)*(n3+1)/2;
    
    return sum_3 + sum_5 - sum_15;
}

int main(){
    unsigned long int t;
    cin >> t;
    
    for(unsigned long int a0 = 0; a0 < t; a0++){
        unsigned long int n;
        cin >> n;
        
        unsigned long int total_sum = sum_multiples(n); // calculate sum of multiples
        cout << total_sum << endl;
    }
    
    return 0;
}
