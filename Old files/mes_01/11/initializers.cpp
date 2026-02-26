#include<iostream>
#include<vector>

int main(){

    // Copy init
    std::vector<int> v1 = 10;     // 10 not an initializer list, copy init won't match explicit constructor: compilation error

    // Direct init
    std::vector<int> v2(10);      // 10 not an initializer list, matches explicit single-argument constructor

    // List init
    std::vector<int> v3{ 10 };    // { 10 } interpreted as initializer list, matches list constructor

    // Copy list init
    std::vector<int> v4 = { 10 }; // { 10 } interpreted as initializer list, matches list constructor
    std::vector<int> v5({ 10 });  // { 10 } interpreted as initializer list, matches list constructor

    // Default init
    std::vector<int> v6 {};       // {} is empty initializer list, matches default constructor
    std::vector<int> v7 = {};     // {} is empty initializer list, matches default constructor

return 0;
}