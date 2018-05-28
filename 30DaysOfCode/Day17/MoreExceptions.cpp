#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class MyException : public exception {
    public:
        virtual const char* what() const noexcept {
            return "n and p should be non-negative";
        }
};

class Calculator {
    public:
        int power(int n, int p) {
            int temp = 1;
            if (n < 0 || p < 0)
                throw MyException();
            else {
                for (int i = 0; i < p; i++) 
                    temp = temp * n;
            }
            return temp;
        }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}