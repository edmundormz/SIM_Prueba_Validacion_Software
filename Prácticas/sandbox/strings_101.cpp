#include <iostream>
#include <string>

using namespace std;

bool pass_check(){
    // Predefined password
    string password = "Pass.word";
    string pass;
    // Password verification flags
    bool Cap, Symbol, Number = false;
    int len;
    int tries = 0;

    // Verify if passwords match
    do{
    cout << "Enter password" << endl;
    cin >> pass;
    if(pass == password){
        // Validate password syntax
        len = pass.size();
        for(int i = 0; i < len; i++){
            int x = int(pass[i]);
            if(x >= 65 && x <= 90){ // Cap validation
                Cap = true;
            }
            if(x >= 48 && x <= 57){ // Number validation
                Number = true;
            }
            if(x >= 32 && x <= 47){ // Symbol validation
                Symbol = true;
            }
            cout << x << endl;
        }
        if(Cap && Symbol && Number){
            return true;
        }
        else{
            cout << "Wrong syntax" << endl;
            tries ++;
        }
    }
    else{
        tries++;
    }
    }while(tries < 2);
    return false;
}

int main(){
    bool pass_check_ = false;
    // len = pass.size();
    // char password[] = "Pass.word0";
    pass_check_ = pass_check();
    if(pass_check_){
        cout << "Ok" << endl;
    }
    else{
        cout << "Meeeeh" << endl;
    }

    return 0;
}


/*
Algorithm
Receive pass
Compare with password
iterate pass
    find Cap    flag
    find number flag
    find symbol flag
        *may use ASCII numeration

*/

