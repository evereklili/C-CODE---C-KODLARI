//mantıksal operatör aşırı yükleme 

#include<iostream>
using namespace std;
class mantiksal
{
    bool x,y;
public:
    mantiksal() {  }; //varsayılan yapıci fonksiyon 
    mantiksal( bool a, bool b){ x=a; y=b; }
    
    bool operator&&(mantiksal a){ if((x&&a.x)&&(y&&a.y)) { return 1; } else { return 0; }  }
    bool operator||(mantiksal a){ if((x||a.x)||(y||a.y)) { return 1; } else { return 0; }  }
    
};

int main()
{
    mantiksal nesne(0,0), nesne1(1,0);
    if(nesne&&nesne1){cout<<"nesne &&nesne1 = true"<<endl;} else  { cout<<"nesne &&nesne1 = false"<<endl; }
    if(nesne||nesne1){cout<<"nesne &&nesne1 = true"<<endl;} else  { cout<<"nesne || nesne1 = false"<<endl; }
    return 0;
}