#include <iostream>
using namespace std;

struct Complex{
       double re;
       double im;
};

Complex operator+ (const Complex &a, const Complex &b){
        Complex sum;
        sum.re=a.re+b.re;
        sum.im=a.im+b.im;
        return sum;
}
Complex operator- (const Complex &a, const Complex &b){
        Complex sub;
        sub.re=a.re-b.re;
        sub.im=a.im-b.im;
        return sub;
}
bool operator== (const Complex &a, const Complex &b){
     if(a.re==b.re && a.im==b.im)
     return true;
     else
     return false;
     }

int main(){
    
    Complex s,d,c1,c2,c3;
    c1.re=3; c1.im=4;
    c2.re=1; c2.im=2;
    c3.re=1; c3.im=2;
    
    s=c1+c2;
    cout<<"c1+c2= "<<s.re<<"+i"<<s.im<<endl;
    d=c1-c2;
    cout<<"c1-c2= "<<d.re<<"+i"<<d.im<<endl;
    
    if(c1==c2)
               cout<<"c1 is equal to c2"<<endl;
    else
               cout<<"c1 is not equal to c2"<<endl;
    if(c2==c3)
               cout<<"c2 is equal to c3"<<endl;
    else
                cout<<"c2 is not equal to c3"<<endl;
                
    system("pause");
    return 0;
}
     
