#include "serverData.h"
#include "Creds.h"
#include <string>
#include <vector>
using namespace std;

void Data::addData(string username, string password){
    Creds studentData = Creds();

    studentData.setUserName(username);
    studentData.setPassword(password);

    studentCredentials.push_back(studentData);

    return;
}