#include <iostream>
using namespace std;

int main() {
   int n=0;
    int f= 1, f1=1;
    cin >> n;
    if(n>=2) {
        cout << f << endl;
        cout << f1 << endl;
        for (int i = 1; i < n - 1; i++) {
            int temp = fibonacci;
            f += f1;
            f1 = temp;
            cout << f << endl;
        }
    }else{
        cout << "errore"<<endl;
    }
   return 0;
}
