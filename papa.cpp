//we are created the code related for function overloading concept;
#include<iostream>
using namespace std;

class base{//base class;
    private:
    int x;
    int y;
    int z;
    double x = 23;
    double y = 34;
    public:
    
    void main(){//function overloading concept;
        z = x + y;
        cout<<"sum of the number:"<<z<<endl;
    }
    
    void main(int a, int b){// also a part of the function overloading concept with different variable;
        cout<<"sum of the number :"<<a + b<<endl;
    }
    void main(float x,float y){//also a part of the function overloading concept with different data type;
        cout<<"subtract the number :"<<x - y - z<<endl;
    }
};
int main(){
   base apana;
   apana.main();
   apana.main(23,34);
   apana.main(53.0f,3.14f);
   return 0;
}