#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Logger{
  private:
  //Constructor private
  Logger(){
    cout<<"New Instance Created";
  };
  public:
    static Logger* logger;

    void log(string s){
      cout<<s<<" ";
    }

    static Logger* getLogger(){
      if(logger == nullptr){
          logger = new Logger();
        }
      return logger;
    }
};

int main() {
  Logger::logger = nullptr;
  Logger* logger = Logger::getLogger();
  // logger->log("hello");
  // Logger* logger1 = Logger::getLogger();
  // logger1->log("world");
  

  return 0;
}