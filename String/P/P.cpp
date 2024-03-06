#include <iostream>

using namespace std;

int main() {
    int t, i ;
    cin >> t; 

    for(i = 0 ; i < t ; i++){
        string s; 
        cin >> s; 

        int len = s.size(); 
        int flag = 0;
        for(int j = 0 ; j <= len ; j++) {
            if(s[j] != s[len-1-j]){
                flag = 1;
            }
        }
        if(flag == 0){
            cout << "YES"
                 << "\n";
        } else{
            cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}