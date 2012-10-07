#include <iostream>
using namespace std;

struct Complex{
       double re;
       double im;
       };
int sum(int s1, int s2){
    cout<<"sum of two integers"<<endl;
    return s1+s2;}
int sum(int s1, int s2,int s3=5){
    cout<<"sum of three integers"<<endl;
    return s1+s2+s3;}
float sum(float s1, float s2){
    cout<<"sum of two floats"<<endl;
    return s1+s2;}
float sum(float s1, float s2,float s3){
    cout<<"sum of three floats"<<endl;
    return s1+s2+s3;}
void sum(Complex s1, Complex s2){
    cout<<"sum of two complex numbers "<<s1.re+s2.re<<"+i"<<s1.im+s2.im<<endl;
  }
  
  int main(){
      int ia=1,ib=2,ic=3;
      float fa=2.5,fb=5.0,fc=1.3;
      Complex c1,c2;
      c1.re=3; c1.im=4;
      c2.re=1; c2.im=2;
      
     // cout<<sum(ia,ib)<<endl;
      cout<<sum(ia,ib,ic)<<endl;
      cout<<sum(fa,fb)<<endl;
      cout<<sum(fa,fb,fc)<<endl;
      sum(c1,c2);
      system("pause");
      return 0;
}
      

