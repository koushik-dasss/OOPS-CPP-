//  Create a class Product with the following data members:
// Non-Static data members: Product’s name and price.
// Static data members: totalProducts and totalPrice.
// Initialize the objects of the Product class using constructors. Each time a product is created,
// update the total number of products and the total price. Display the total average price of all
// products using a static function
#include<iostream>
using namespace std;
class Product{
    string name ;
    double price ;
    static int totalProducts;
    static double totalPrice;
    public:
    Product(string n ,  double p){
        name = n;
        price = p;
        totalProducts++;
        totalPrice+=price;
    }
    static void showAveragePrice(){
        if(totalProducts == 0){
            cout<<"No products available. "<<endl;
        }else{
            double avg = totalPrice/totalProducts;
            cout<<"Average price of all products : "<<avg<<endl;  
        }
    }
};
int Product :: totalProducts = 0;
double Product :: totalPrice = 0;
int main(){
    Product P1("Book",250.50);
    Product P2("Pen",30.00);
    Product P3("Bag",500.00);
    Product :: showAveragePrice();
    return 0;
}