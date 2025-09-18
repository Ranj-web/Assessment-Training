/*A program to ask user about the cost price and selling
price banana per dozen. Calculate the profit or loss earned
upon selling 25 bananas.*/

#include <iostream>
using namespace std;

int main() {

    float costpricedozen, sellingpricedozen, costprice25bananas, sellingprice25bananas;
    cout<<"Enter cost price of bananas per dozen = ";
    cin>>costpricedozen;

    cout<<"Enter selling price of bananas per dozen = ";
    cin>>sellingpricedozen;
    
    costprice25bananas=(costpricedozen/12)*25;
    sellingprice25bananas=(sellingpricedozen/12)*25;

    if(sellingprice25bananas>costprice25bananas){
        cout<<"Profit = "<<sellingprice25bananas-costprice25bananas<<endl;
    }
    else if(sellingprice25bananas<costprice25bananas){
        cout<<"Loss = "<<costprice25bananas-sellingprice25bananas<<endl;
    }
    else{
        cout<<"NO Profit No Loss"<<endl;
    }

    return 0;

}

