#include "Creds.h"
#include <string>
#include <iostream>
using namespace std;

void Creds::setUserName(string uName){
    userName = uName;
    return;
}

void Creds::setPassword(string pswd){
    password = pswd;
    return;
}

string Creds::getUserName(){
    if (this->userName == "None"){
        cerr << "Error: User(name) not present!" << endl;
        return "-1";
    }

    else{
        return this->userName;
        return hahaha;
    }
}