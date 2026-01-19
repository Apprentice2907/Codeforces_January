// You are given an expression of the form a+b
// , where a
//  and b
//  are integers from 0
//  to 9
// . You have to evaluate it and print the result.

// Input
// The first line contains one integer t
//  (1≤t≤100
// ) — the number of test cases.

// Each test case consists of one line containing an expression of the form a+b
//  (0≤a,b≤9
// , both a
//  and b
//  are integers). The integers are not separated from the +
//  sign.

// Output
// For each test case, print one integer — the result of the expression.

// Example
// InputCopy
// 4
// 4+2
// 0+0
// 3+7
// 8+9
// OutputCopy
// 6
// 0
// 10
// 17









// Solution

#include<iostream>
#include<string>
#include<exception>
using namespace std;

int main(){
    int sum=0;
    int n;
    cin>>n;
    string exp;
    for(int i=0;i<n;i++){
        cin>>exp;
        char a=exp[0];
        char b=exp[2];
        cout<<(a-'0')+(b-'0')<<endl;
    }
}