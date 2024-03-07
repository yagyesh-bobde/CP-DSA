#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int t; 
    cin>>t; 

    for(int i = 0 ; i < t; i++){
        string s1, s2; 
        cin>>s1>>s2;

        int j, k;

        for(j = 0 ; j < s1.size(); j++){
            int flag = 1;
            for(k =0 ; k < s2.size(); k++){
                if(s1[j] != s2[k]){
                    flag=1;
                    break;
                }
            }
            if(flag == 1){
                cout<<"NO"<<endl;
                break;
            } else{ 
                cout<<"YES"<<endl;
                break;
            }
        }
    }
    
    return 0;
}