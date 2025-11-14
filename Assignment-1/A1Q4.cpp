// 1.4 Write a program to read a matrix of size m*n from the keyboard using new operator.
#include<iostream>
using namespace std;
int main(){
    int m,n ;
    cout<<"Enter the number of rows and columns of the matrix :"<<endl;
    cin>>m>>n;
    int **p = new int*[m];
    for(int i = 0 ; i< m ;i++){
        p[i] = new int[m];
    }
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j< n ;j++){
            cin>>p[i][j];
        }
    }
    cout<<"The elements of the matrix are :"<<endl;
    for(int i = 0 ; i< m ;i++){
        for(int j = 0 ; j< n ; j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i< m ;i++){
        delete [] p[i];
    }
    delete []p;
    return 0;
}