#include <iostream>
using namespace std;
int result;
int cal (int x, int y, char z);
int main() {
    int a,b;
    char op;
      
    
    for (int i =0 ; i<3;i++){
         cout << "weicome to my calculator"<<endl;
        cout <<"now select the operator (+,-,*,/)"<<endl;
    cin>>op;
    cout << "Please enter the first number : "<<endl;
    cin>> a;
    cout << "please enter second number"<<endl;
    cin>>b;


         cal(a,b,op);

    }
   
}
int cal (int x, int y, char z){
    if (z =='+' ){ 
        result = x+ y;
        cout<< "the sum of "<<x<<" and  "<<y<< ":"<<result<< endl;
    } else if (z =='-' ){ 
        result = x- y;
        cout<< "the subtract of "<<x<<" and "<<y<< ":"<<result<< endl;
    }else if (z =='*' ){ 
        result = x* y;
        cout<< "the product of "<<x<<" and "<<y<< ":"<<result<< endl;
    }else if (z =='/' ){ 
        if (y ==0){
            cout<<"please enter a valid no. "<<endl;
            cin>>y;
            result = x/ y;
        }else {
        result = x/ y;
    }
    cout<< "the division of "<<x<<" and "<<y<< ":"<<result<< endl;
    }else {
        cout<< "you choosed an invalid operator"<<endl;
    }
    return 0;
}