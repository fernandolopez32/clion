#include <iostream>
#include <string>


using namespace std;

int main() {
    cout << "Hello, World!" <<endl;

    string myAnimalArrays [4] = {"Dog", "Cat", "Fish", "Tiger"};

    for(int i =0; i <= myAnimalArrays->length();i++){
            cout<< myAnimalArrays[i] << "\n";
    }


    return 0;
}
