#include <iostream>
using namespace std;

// function are set of code which perform something for you
// function are used to modulorise  code
// function are used to increase rediability
// function are used to use same code multiple time
// void ->which does not return any value
// return
// parameterized
// nonparameterized5
// Task:- take two number and print its sum
int sum(int a, int b)
{
    int add = a + b;
    return add;
}

int maximum(int num1,int num2){
    int maximum=max(num1,num2);
    return maximum;
}
int minimum(int num1,int num2){
    int minimum=min(num1,num2);
    return minimum;
}
int main()
{
    int a, b;
    cout << "enter your number to print addtion of them" << endl;
    cin >> a >> b;
    cout << "answer is "<<sum(a, b)<<endl;
    cout << "Maximum number is "<<maximum(a, b)<<endl;
    cout << "Minimum number is "<<minimum(a, b)<<endl;
}