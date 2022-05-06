#include "serverData.h"
#include "Creds.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void Data::addData(string username, string password){
    Creds studentData = Creds();

    studentData.setUserName(username);
    studentData.setPassword(password);

    studentCredentials.push_back(studentData);
}


void Data::removeData(string username){

    for (int i = 0; i < studentCredentials.size(); ++i){
        if (studentCredentials.at(i).getUserName() == username){
            studentCredentials.erase(studentCredentials.begin() + i);
            return;
        }
    }

    cout << "Username does not exist" << endl;
}