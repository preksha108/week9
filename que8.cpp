include <iostream>
using namespace std;
 

template <typename T> T maxOfThree(T x, T y,T z)
{
    if(x>y){
        if(x>z){
            return x;
        }else{
            return z;
        }
    }else{
        if(y>z){
            return y;
        }else{
            return z;
        }
    }
}
 
int main()
{
    cout << maxOfThree(3, 7,9) << endl;
    cout << maxOfThree(3.0, 7.0,6.0) << endl;
 
 
    return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms