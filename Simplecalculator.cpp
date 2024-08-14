#include<iostream>
using namespace std;


int main() {

    cout<<"*****CALCULATOR*****"<<'\n';

    char  oprt; //Operator
    cout<<"Enter operator you want to use : ";
    cin>>oprt;


    double num1;
    cout<<"Enter 1st number: ";
    cin>>num1;

    double num2;
    cout<<"Enter 2nd number: ";
    cin>>num2;

    double result;
    

    if(oprt=='+') {
        result = num1 + num2;
        cout<<"RESULT: "<<result<<'\n';
    }

    else if(oprt=='-') {
        result = num1 - num2;
        cout<<"RESULT: "<<result<<'\n';
    }

    else if(oprt=='*') {
        result = num1*num2;
        cout<<"RESULT: "<<result<<'\n';
    }

    else if(oprt == '/') {
        result = num1/num2;
        cout<<"RESULT: "<<result<<'\n';
    }

    else {
        cout<<"Invalid Response";
    }

    cout<<"*******PROGRAM EXECUTED********";

}



    
