#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
        string id;
        int code;
        Product(string id, int code) {
            this->id = id;
            this->code = code;
        }
};

int main(){
    Product product1 = Product("codetree", 50);
    
    string id2;
    int code2;
    cin >> id2 >> code2;
    
    Product product2 = Product(id2, code2);

    cout << "product " << product1.code << " is " << product1.id << endl;
    cout << "product " << product2.code << " is " << product2.id << endl;
    return 0;
}