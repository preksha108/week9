#include <iostream>
using namespace std;
 
template<class t>
 class sum
 {
  t a,b;
  public:
  sum()
  {
   cin>>a>>b;
  }
  t Sum() 
{
    cout<<"\nSum="<<a+b<<endl;
}
 };
int main()
{
   sum<int>obj_add;
 obj_add.Sum();
    sum<float>obj_add2;
 obj_add2.Sum();    
}