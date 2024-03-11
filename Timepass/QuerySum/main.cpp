#include <iostream>

using namespace std;

//!  INPUT ARRAY -> 0 0 0 0 0 0 0 0
// QUERIES: 
// 4, 6, 1
// 2, 5 ,3
// 1, 4 ,-5
// OUTPUT -> -5 -2 -2 -1 4 1 0 0
// LOGIC: what you can do is create a prefix sum array and then for each query you can subtract the value from the prefix sum array and then print the array
// Example: In first iteration 
// 0 0 0 0 0 0 0 0
// we'll add 1 at 4th index and since we only want to carry out the operation till 6th index we'll add -1 at 7th index
// 0 0 0 1 0 0 -1 0
// In second iteration
// 0 0 0 1 0 0 -1 0
// we'll add 3 at 2nd index and since we only want to carry out the operation till 5th index we'll add -3 at 6th index
// 0 3 3 1 -3 -3 -1 0
// In third iteration
// 0 3 3 1 -3 -3 -1 0
// we'll add -5 at 1st index and since we only want to carry out the operation till 4th index we'll add 5 at 5th index
// -5 -2 -2 -1 4 1 0 0


int main() {

    
    return 0;
}