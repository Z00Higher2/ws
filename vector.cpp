// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Project 12A
// Vector.cpp file

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    for (int i = 0; i < n; i++){
        return makeVector(i);
    }
}

int main(){
    
    makeVector(6);
}