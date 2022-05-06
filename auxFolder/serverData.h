#ifndef DATA
#define DATA
#include <string>
#include <vector>
#include  "Creds.h";
using namespace std;

class Data{
    private:
        vector<string> userNames;
        vector<string> passWords;
    
    public:
        void addData(string username, string password);
        string findUserName(string username);
        int existingFileSize(vector<string> unVector); 
};

#endif