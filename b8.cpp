#include <iostream>
#include <string>
using namespace std;

int main(){
    string name; getline(cin, name);
    string ho,ten,tendem;
    for(int i = 0; i < name.size();i++){

        if(i == name.find(' ')){
            cout << i << '\n';
            ho = name.substr(0,i);
        }
         else if( i == name.rfind(' ')){
            ten = name.substr(i,name.size());
        }
        else{
            tendem = name.substr(ho.size(),ten.size());
        }
    }
    cout << "Ho: " << ho << '\n';
    cout << "Ten dem: " << tendem << '\n';
    cout << "Ten: " << ten;
    return 0;

}