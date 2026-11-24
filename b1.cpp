#include <iostream>
using namespace std;

int main(){
    string name;
    int count = 0;
    getline(cin,name);
    for(int i =0; i< name.size();i++){
        count++;
    }
    cout << "Xin chao Nguyen Van An!" << endl << "Ho ten co " <<count << " ky tu";
    return 0;
  
}