#include <iostream>
#include <cmath>
// four function calculator

using namespace std;


string menu(){
    string user;
    cout<<"Enter 1 to add up two numbers"<<endl;
    cout<<"Enter 2 to subtract two numbers"<<endl;
    cout<<"Enter 3 to multiply two numbers"<<endl;
    cout<<"Enter 4 to divide two numbers"<<endl;
    cout<<"\n\n";


    cin >> user;
    return user;
}

double adding(double num, double num2){
    return num + num2;
};

double sub(double num, double num2){
    return num - num2;
}; 

double mult(double num, double num2){
    return num * num2;
};
double divide(double num, double num2){
    return num / num2;
};

int main(){
    

    string user = menu();

    int num1,num2;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
   
    //logic
    if(user == "1"){
        cout<<"Addition: "<<adding(num1,num2)<<endl;
    }
    else if(user == "2"){
        cout<<"Substraction: "<<sub(num1,num2)<<endl;
    }
    else if(user == "3"){
        cout<<"Multiplication: "<<mult(num1,num2)<<endl;
    } 
    else if(user == "4"){
        cout<<"Division: "<<divide(num1,num2)<<endl;
    }
    else {
        cout<<"Wrong operator"<<endl;
    }

    return 0;
}