#include <iostream>
using namespace std;

int main(){

int user_number;
cout<<"What number would you like to use?";
cin>>user_number;

for(int x= 1; x<=user_number;x++){
    for(int y = 1; y<= x; y++){
        cout<< "* ";
        }

    cout << endl;
}

return 0;


}