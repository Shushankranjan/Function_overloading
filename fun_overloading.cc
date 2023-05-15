#include<iostream>
using namespace std;
int sum(int,int);
int sum(int,int,int);

int main(){
    int a,b,c;    
    cout<<"A and B"<<endl;
    cin>>a>>b;    
    cout<<"The sum of 2 number is"<<sum(a,b)<<endl;
    cout<<"A B C"<<endl;
    cin>>a>>b>>c;
    cout<<"The sum of 3 number is"<<sum(a,b,c)<<endl;

    return 0;
}

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b, int c){
    return a+b+c;
}