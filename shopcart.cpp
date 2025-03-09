// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<iomanip>
#include<sstream>
#include<fstream>
using namespace std;

//Structure of product
struct product 
{
    string name;
    float price;
    int quantity;
};

//class starts here...
class Products {
    private:
        string name;
        float price;
        int quantity,count,n;
    
    public:
        vector<vector<product>> p;  //2D vector with structure
        Products(): count(0)  {}
    
     //Add product data into the 2D vector
    void add()
    {
        product prod; //Object of struct
        count++;
        cout<<"\nEnter details for product "<<count<<endl;
        cout<<"Enter product name: ";
        cin>>prod.name;
        cout<<"Enter product price: ";
        cin>>prod.price;
        cout<<"Enter product quantity: ";
        cin>>prod.quantity;
       
        p.push_back({prod});  //Include {} for struct object
    }

    //Print product details
    void view() 
    {
        if (p.size()>0)
        {
        //Use two loops to display 2D vector p 
        cout<<"\nProduct List:"<<endl;
        cout << "\t  Product Name    Price     Quantity" << endl;
        for (int i = 0; i < p.size(); i++) 
        {
            for (int j = 0; j < p[i].size(); j++) 
            {
                int width1 = 15, width2 = 12, width3 = 10;
                
                int padding1 = (width1 - p[i][j].name.length())/2;
                int padding2 = (width2 - length(p[i][j].price))/2;
                int padding3 = (width3-length(p[i][j].quantity))/2;
                
                cout << i + 1 << ".  " << string(padding1, ' ') << p[i][j].name 
                             << string(width1 - p[i][j].name.length() - padding1, ' ') 
                             << string(padding2, ' ') << p[i][j].price
                             << string(width2 - length(p[i][j].price) - padding2, ' ') 
                             << string(padding3, ' ') << p[i][j].quantity 
                             << string(width3 - length(p[i][j].quantity) - padding3, ' ') << endl;
            }
        }
        }
        else 
        {
            cout<<"Your cart is empty!"<<endl;
        }
    }
    
    void remove()
    {
        if (p.size()>0)
        {
            cout<<"\nEnter index of product to remove: "<<endl;
            cin>>n;
            p.erase(p.begin() + n-1);
        }
    }
    
    void modify()
    {
        if (p.size()>0)
        {
            cout<<"\nEnter index of product to remove: "<<endl;
            cin>>n;
            cout<<"Enter new details for product "<<n<<endl;
            cout<<"Enter new name:"<<endl;
            cin>>p[n-1][0].name;
            cout<<"Enter new price:"<<endl;
            cin>>p[n-1][0].price;
            cout<<"Enter new quantity:"<<endl;
            cin>>p[n-1][0].quantity;
        }
        // Use p[][0] for accessing prod(struct) and .value
    }
    
    void sort_price()
    {
        sort(p.begin(), p.end(), [](const vector<product>& a, const vector<product>& b) {
        return a[0].price < b[0].price;
        });
    }
    
    void sort_name()
    {
        sort(p.begin(), p.end(), [](const vector<product>& a, const vector<product>& b) {
        return a[0].name < b[0].name;
        });
    }

    
    void total()
    {
        float total = 0;
        //prod runs from all rows in vector p
        for (const auto& prod : p) 
        { 
            //obj runs through all objects of structure
            for (const auto& obj : prod) 
            { 
                total += obj.price * obj.quantity;
               
            }
        }
        cout<<"Total amount is: "<<total<<endl;
    }
    
    // Overloading length Function to return legth of int,float,string
    int length(int l)
    {
        stringstream ss;
        ss<<l;
        return ss.str().length();
    };
    int length(float l)
    {
        stringstream ss;
        ss<<l;
        return ss.str().length();
    };
    
};
// class ends here

int main()
{
    int choice,n;
    Products p1; //create object of class
    
    // Display options to choose 
    cout<<"1. add items in cart\n";
    cout<<"2. remove items from cart\n";
    cout<<"3. view items in cart\n";
    cout<<"4. modify items in cart\n";
    cout<<"5. total cost of items in cart\n";
    cout<<"6. sort items by price in cart\n";
    cout<<"7. sort items by name in cart\n";
    cout<<"8. Save the file\n";
    cout<<"9. Exit cart\n";
    
    
    
    do {
        cout<<"\nEnter your choice: "<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                p1.add();
                break;
            case 2:
                p1.view();
                p1.remove();
                break;
            case 3:
                p1.view();
                break;
            case 4:
                p1.view();
                p1.modify();
                break;
            case 5:
                p1.total();
                break;
            case 6:
                p1.sort_price();
                p1.view();
                cout<<"Successfully sorted by price"<<endl;
                break;
            case 7:
                p1.sort_name();
                p1.view();
                cout<<"Successfully sorted by name"<<endl;
                break;
            case 8:
                p1.save();
                break;
            case 9:
                cout<<"Exiting cart"<<endl;
                break;
            default:
                cout<<"Enter valid choice.";
                break;
        }
    }while(choice!=9);
    return 0;
}