#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

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
