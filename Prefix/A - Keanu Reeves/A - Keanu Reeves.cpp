#include <iostream>

// INPUT
// 6
// 100011
// OUTPUT
// 2 
// 100 011

using namespace std;


int main() {
    int n; 
    cin >> n;
    char s[n];
    cin >> s;

    int mid = (int) n / 2;

    int count = 0;

    int temp = (int)n / 2;

    while(temp >= 1){
        int count1 = 0;
        int count0 = 0;

        for(int i = 0; i < temp; i++){
            if(s[i] == '1'){
                count1++;
            }
        }

        for(int i = temp; i < n; i++){
            if(s[i] == '0'){
                count0++;
            }
        }

        if(count1 != count0){
            cout << (int)temp / n << "\n";
            for(int i = 0; i < temp; i++){
                cout << s[i];
            }
            cout << " ";
            for(int i = temp; i < n; i++){
                cout << s[i];
            }

            return 1;
        }

        temp--;
    }

    cout << count << endl;


    return 0;
}