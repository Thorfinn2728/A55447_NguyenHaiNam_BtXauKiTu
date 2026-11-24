#include <iostream>
using namespace std;

int main(){
    string s; getline(cin,s);
    cout << "Ky tu dau: " << s[0] << '\n';
    cout << "Ky tu cuoi: " << s[s.size() -1 ] << '\n';
    cout << "Ky tu o vi tri chan: ";
    for(int i = 0; i < s.size() ; i++){
        if(i % 2== 0){
            cout << s[i];
        }
    }
    return 0;
}