// Consider a shopping list of items for which a user can place an order with a dealer every month.
// The list includes details such as code number and price of each item. Different Operations which
// can be performed are:
// 1. Adding an item to the list
// 2. Deleting an item from the list
// 3. Printing the total value of the order.
// 4. Display all items on the list.
// Write a C++ program using class and objects depicting above scenario. Here, arrays are used as
// member variables in the class.
#include<iostream>
using namespace std;
class ShoppingList{
    int code[50];
    float price[50];
    int count;
    public:
    ShoppingList(){
        count = 0;
    }
    void addItem(){
        cout<<"Enter item code: "<<endl;
        cin>>code[count];
        cout<<"Enter item price: "<<endl;
        cin>>price[count];
        count++;
    }
    void deleteItem(){
        int delCode;
        cout<<"Enter item code to delete: "<<endl;
        cin>>delCode;
        for(int i = 0 ; i< count ; i++){
            if(code[i] == delCode){
                for(int j = i ; j < count-1 ; j++){
                    code[j] = code[j+1];
                    price[j] = price[j+1];
                }
                count--;
                cout<<"Item deleted successfully."<<endl;
                return;
            }
        }
        cout<<"Item not found."<<endl;
    }
    void displayItems(){
        if(count == 0){
            cout<<"Shopping list is empty."<<endl;
            return;
        }
        for(int i = 0 ; i < count ; i++){
            cout<<"Code : "<< code[i] << " Price : "<< price[i] <<endl;
        }
    }
    void totalValue(){
        float total = 0 ;
        for(int i = 0 ; i < count ; i++){
            total+=price[i];
        }
        cout<< total <<endl;
    }
};
int main(){
    ShoppingList list;
    int n;
    cout<<"Enter number of items to be added: "<<endl;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        list.addItem();
    }
    cout<<"Displaying items before deletion : "<<endl;
    list.displayItems();
    cout<<"Total value of items before deletion :"<<endl;
    list.totalValue();
    int m;
    cout<<"Enter number of items to be deleted : "<<endl;
    cin>>m;
    for(int i = 0 ; i< m ;i++){
        list.deleteItem();
    }
    cout<<"Displaying items after deletion : "<<endl;
    list.displayItems();
    cout<<"Total value of items after deletion : "<<endl;
    list.totalValue();
    return 0;
}