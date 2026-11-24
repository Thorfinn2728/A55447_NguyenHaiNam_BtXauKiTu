#include <iostream>
using namespace std;

int find(string s, string n){
    int count = 0;
    for(int i = 0; i < s.size(); i++ ){
        for(int j = 0; j <n.size();j++){
            if( s[i] == n[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string s; getline(cin,s);
    string n = "aeiouAEIOU";
    cout << "So nguyen am: " << find(s,n);
    

    return 0;
}