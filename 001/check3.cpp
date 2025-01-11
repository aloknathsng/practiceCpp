#include <iostream>
using namespace std;
int sum(int i, int j);
int main () {
    int a,b,result;
    bool status;
    for(int z =0;z<3;z++){
    cout<<"enter 1st number : \n"; //  << is called insertion operator
    cin>>a;                        //  >> is called extraction operator
    cout<<"enter 2nd number : \n";
    cin>>b;
    result = sum(a,b);
    cout<<"sum of "<<a<<" and "<<b<<" are : "<<result<<endl ;
    cout<<"do you want to add again 1/0 ";
    cin>>status;
    if (status==1){
        continue;
    }else if (status==0){
         cout<<"Thank you...";
        break;
    }
    }
    return 0;
}
int sum(int i, int j){
    return i+j;
}