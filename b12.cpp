#include <iostream>
using namespace std;

int main(){
    string a, b; getline(cin, a); getline(cin, b);
    cout << "Ghep chuoi: " << a+b << '\n';
    int count = 0;
    int to_string = stoi(a) + stoi(b);
    cout << "Tong so: " << to_string << '\n';
    while(to_string>0){
        int dem = to_string%10;
        to_string/=10;
        count++;
    }
    cout << "Tong co " << count << " chu so";
    return 0;
}