#ifndef CREDS
#define CREDS
#include <string>
using namespace std;

class Creds{
   private:
      string userName = "None";
      string password ="None";
   public:
      void setUserName(string uName);
      void setPassword(string pswd);
      string getUserName();
};

#endif