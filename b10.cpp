#include <iostream>
using namespace std;

string rev(string s){
    string a = "\0";
    int n = s.size() - 1 ;
    for(int i = n ; i >= 0 ; i--){
        a += s[i];
    }
    return a;
}


int main(){
    string s; getline(cin, s);
    cout << "Chuoi dao nguoc: " << rev(s) << '\n';
    if(rev(s) == s){
        cout << "La chuoi doi xung";
    }else{
        cout << "Khong la chuoi doi xung";
    }
    return 0;

}