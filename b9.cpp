#include <iostream>
using namespace std;

int main(){
    string phone_num ; getline(cin, phone_num);
    bool legit = true;
    int count = 0;
    for(int i = 0; i< phone_num.size();i++){
        if(!(phone_num[i] >= '0' && phone_num[i]<='9' && phone_num.size() == 10)){
            legit = false;
            count++;

        }
    }
    if(legit){
        cout << "So dien thoai hop le";
    }else if(!(legit) || count < 10){
        cout << "So dien thoai khong hop le";
    }
    return 0;
}