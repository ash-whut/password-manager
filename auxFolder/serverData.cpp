#include "serverData.h"
#include <string>
#include <vector>
using namespace std;

void Data::addData(string username, string password){
    this->userNames.push_back(username);
    this->passWords.push_back(password);
    return;
}

string Data::findUserName(string username){
    bool status = false;

    for (int i = 0; i < this->userNames.size(); ++i){
        if (username == this->userNames.at(i)){
            status = true;
            return this->passWords.at(i);
        }
    }

    if (status == false){
        return "None";
    }
}

int Data::existingFileSize(vector<string> uNameVector){
    return uNameVector.size();
}