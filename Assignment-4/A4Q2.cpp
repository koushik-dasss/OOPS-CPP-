// Define a class String. Use the overloaded == operator to compare two strings.
#include <iostream>
using namespace std;
class String{
    string str;
    public:
    String(string s){
        str = s;
    }
    bool operator==(String s){
        return (str==s.str);
    }
};
int main(){
    String s1("Hello ");
    String s2("Hello ");
    String s3("World");
    if(s1==s2){
        cout<<"The strings are equal."<<endl;
    }else{
        cout<<"The strings are not equal."<<endl;
    }
    if(s1==s3){
        cout<<"The strings are equal"<<endl;
    }else{
        cout<<"The strings are not equal"<<endl;
    }
    return 0;
}