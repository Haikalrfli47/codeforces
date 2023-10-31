#include <iostream>
// #include <cstdlib>
// #include <ctime>
#include <string>
#include <cmath>


using namespace std;


int main() {
 
 Floor Number solution
  int t; cin >> t; 
    for(int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        int first = 3;
        int end = x + 2;
        int floor = 2;
        bool check = true;

        if(n <= 2) {
          cout << 1 << endl;
        }else {
           while(check) {
                if(n >= first && n <= end) {
                    check = false;
                } else {
                    first += x;
                    end += x;
                    floor++;
                }
            }
        cout << floor << endl;  
        }
           
    }
 
    return 0;
}

