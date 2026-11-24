#include <iostream>
using namespace std;




int main(){
    string s; getline(cin, s );
    string old; getline(cin , old);
    string ne; getline(cin, ne);
    for(int i = 0; i < s.size() ; i++){
        int pos = s.find(old,i);
        if(pos == i){
            s.replace(i,old.length(),ne);
        }
    }
    cout << s;
    return 0;
}