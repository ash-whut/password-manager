#ifndef DATA
#define DATA
#include <string>
#include <vector>
#include  "Creds.h";
using namespace std;

class Data{
    private:
        vector<Creds> studentCredentials;
    
    public:
        void addData(string username, string password);
        void removeData(string username, string password);
        
};

#endif