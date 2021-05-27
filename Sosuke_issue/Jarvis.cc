#include "Jarvis.hpp"

using namespace std;
int main()
{
   Jarvis* js = new Jarvis();
   while(1)
   {
       if(!js->LoadEtc()){
           cout<<"load failed"<<endl;
           return 1;
       }
       js->Run();
   }
   return 0;
}

