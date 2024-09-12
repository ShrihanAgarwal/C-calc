/**
* Name:Shrihan 
* Program Name:Calculator 
* Date:10/12/2024
* Extra:
*/

#include<iostream>
using namespace std;
int one, two; 
int main(){

    cout<< "Enter two numbers" << endl; 
    cin>>one;
    cin>>two;

    float sum = one + two;
    cout<<"Sum: "<< sum <<endl; 

    float difference = one - two; 
    cout<<"Difference: "<< difference << endl; 

    float product = one * two;
    cout<<"Product: "<< product << endl; 

    float quotient = one/two;
    cout<<"Quotient: "<< quotient<<endl; 

    int mod = int(one) % int(two);
    cout<<"Remainder: "<<mod<<endl;

    float increment = ++one;
    cout<<"Increment: "<<increment<<endl;

    float decrement = --two; 
    cout<<"Decrement: "<<decrement<<endl; 
}
