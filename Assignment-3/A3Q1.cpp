// Define a class String that could work as an user-defined string type. Include constructors that
// will enable us to create uninitialized string
// String s1; // string with length 0
// and also to initialize an object with a string constant at the time of creation like
// String s2(”Well done!”);
// Include a function that adds two strings to make a third string. Note that the statement
// string s2 = s1;
// will be perfectly reasonable expression to copy one string to another. Write a complete program
// to test your class to see that it does the following tasks:
// (a) Creates uninitialized string objects.
// (b) Creates objects with string constants.
// (c) Concatenates two strings properly.
// (d) Displays a desired string object.
#include<iostream>
#include<cstring>
using namespace std;
class String{
    char *str;
    int length;
    public:
    String(){ // a . creates unin. string objects 
        length = 0 ;
        str = new char[length+1];
    }
    String(char *s){ // b . objects with string constants 
        length = strlen(s);
        str = new char[length+1];
        strcpy(str,s);
    }
    void display(){ // d . display the string object 
        cout<<str<<endl;
    }
    void join(String &a , String &b){ // c . concat two strings 
        length = a.length + b.length;
        str = new char[length+1];
        strcpy(str,a.str);
        strcat(str,b.str);
        delete str;
    }
};
int main(){
    String S1;
    cout<<"S1: ";
    S1.display();
    String S2("Well done");
    cout<<"S2: ";
    S2.display();
    String S3("Hello ");
    String S4("World");
    String S5;
    S5.join(S3,S4);
    cout<<"S5: ";
    S5.display();
    return 0;
} 