// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3


#include <iostream>
#include <string>
using namespace std;

class cube{
    double height=2.0;
    double width=3.0;
    double lenght=5.0;
    
    public:
    double volume(){
        double v;
        v=height*width*lenght;
        return v;
    }
};

int main(){
    cube cube1;
    double vol=cube1.volume();
    double height=cube1.height;
    cout<<"height"<height;
    cout<<"Volume:"<<vol<<endl;
}

