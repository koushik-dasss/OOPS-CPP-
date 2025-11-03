// WAP to create an enum (Day) containing 7 day names as its attributes. Prompt the user to
// enter a day number as int type. Assign this day number to a variable of enum Day. Using
// switch display the corresponding day name of the given day number. Pass the variable of Day
// in switch and make the cases as attributes of Day
#include <iostream>
using namespace std;
enum Day{Sunday = 1 ,Monday , Tuesday , Wednesday , Thursday , Friday , Saturday};
int main(){
    cout<<"The value for the day Sunday is 1 "<<endl<<"The value for the day Monday is 2 "<<endl<<"The value for the day Tuesday is 3 "<<endl<<"The value for the day Wednesday is 4 "<<endl<<"The value for the day Thursday is 5 "<<endl<<"The value for the day Friday is 6 "<<endl<<"The value for the day Saturday is 7 "<<endl;
    int a ;
    cout<<"Enter the day number : ";
    cin>>a;
    Day d = (Day)a;
    switch(d){
        case Sunday :
        cout<<"The value for the day is Sunday."<<endl;
        break;
        case Monday :
        cout<<"The value for the day is Monday."<<endl;
        break;
        case Tuesday :
        cout<<"The value for the day is Tuesday."<<endl;
        break;
        case Wednesday :
        cout<<"The value for the day is Wednesday."<<endl;
        break;
        case Thursday :
        cout<<"The value for the day is Thursday."<<endl;
        break;
        case Friday :
        cout<<"The value for the day is Friday."<<endl;
        break;
        case Saturday :
        cout<<"The value for the day is Saturday."<<endl;
        break;
        default :
        cout<<"Wrong number entered ."<<endl;
    }
    return 0;
}
