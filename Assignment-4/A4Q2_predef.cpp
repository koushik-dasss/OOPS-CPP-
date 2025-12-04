// Define a class String. Use the overloaded == operator to compare two strings.
#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *str;
    int length;
    public:
    String(const char *s){
        length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }
    bool operator==(String s){
        if(strcmp(str,s.str)==0){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    String s1("Hello ");
    String s2("Hello ");
    String s3("World ");
    if(s1==s2){
        cout<<"The strings are equal."<<endl;
    }else{
        cout<<"The strings are not equal."<<endl;
    }
    if(s1==s3){
        cout<<"The strings are equal."<<endl;
    }else{
        cout<<"The strings are not equal."<<endl;
    }
    return 0;
}