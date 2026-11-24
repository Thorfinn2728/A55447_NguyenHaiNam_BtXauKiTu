#include <iostream>
using namespace std;

int main(){
    string s; getline(cin , s);
    int count1=0;
    int count2 = 0;
    int count3 = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] >='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
            count1++;
        }
        if(s[i] >='0' && s[i]<='9'){
            count2++;
        }
        if(s[i] == ' '){
            count3++;
        }
    }
    cout << "Chu cai: " << count1 << '\n';
    cout << "Chu so: " << count2 << '\n';
    cout << "Khoang trang: " << count3;
    return 0;
}