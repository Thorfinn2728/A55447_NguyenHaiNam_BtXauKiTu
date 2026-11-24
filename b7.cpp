#include <iostream>
using namespace std;

int main(){
    string s; getline(cin, s);
    string t; getline(cin, t);
    int count = 0;
    for(int i = 0; i< s.size() ; i++){
        int pos = s.find(t,i);
        if(pos == i){
            cout << "Tim thay tai vi tri " << i << endl;
            count++;
        }
    }
    cout << "So lan xuat hien: " << count;
}