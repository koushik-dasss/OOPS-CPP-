// Write a function to create a vector of user defined size m using the new operator . 
#include<iostream>
using namespace std;
int *vector(int m){
    int *p = new int[m];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i < m ;i++){
        cin>>*(p+i);
    }
    return p;
}
void display(int *p , int m){
    cout<<"Display the elements of the array :"<<endl;
    for(int i = 0 ; i< m ; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}
int main(){
    int m;
    cout<<"Enter the size of the array :";
    cin>>m;
    int *myArray = vector(m);
    display(myArray,m);
    delete [] myArray;
    return 0;
}