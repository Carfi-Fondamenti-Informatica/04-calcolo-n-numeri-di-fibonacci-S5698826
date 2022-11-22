#include <iostream>
using namespace std;

int main() {
    int n=0,i,primoN=1,secondoN=1,terzoN;
    do{
        cin>>n;
        if(n<2)
            cout<<"errore";
    }while(n<2);
    cout<<primoN<<endl;
    cout <<secondoN<<endl;
    for(i=2;i<n;i++) {
        terzoN = primoN + secondoN;
        primoN = secondoN;
        secondoN = terzoN;
        cout << terzoN << endl;
    }
   return 0;
}
