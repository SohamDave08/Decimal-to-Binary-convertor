#include "iostream"
#include "stack"  //We would need this library to use stack
using namespace std;

int main()
{
    int dec;
    cout<<"Enter decimal number: ";
    cin>>dec;
    int temp = dec;  //Buffer variable
    stack<int> stk;  //We use stack to store the calculation and maintain the binary order
    while(temp)
    {
        stk.push(temp%2);
        temp /= 2;
    }
    
    cout<<"Binary conversion of ("<<dec<<") is ";
    while(!stk.empty())  // Traversing the stack and printing binary bits 
    {
        cout<<stk.top();
        stk.pop();
    }
    return 0;
}