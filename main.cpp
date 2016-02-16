#include <iostream>
using namespace std;
#include "Fraction.h"

int main() {
    Fraction f01, f31(3), f34(3, 4), f24(2, 4);
    
    cout<< "f01 is: " <<f01<<endl;
    cout<<"f31 is: " << f31<< endl;
    cout<<"f34 is: " <<f34 <<endl;
    cout<<"f24 is: "<<f24<<endl<<endl;
    
    cout<<"add(f34, f24) is: "<<f34+ f24 <<endl;//<<", den=" <<endl;
    cout<<"sub(f34, f24) is: " <<f34- f24 <<endl;
    cout<<"mul(f34, f24) is: " <<f34 * f24 <<endl;
    cout<<"div(f34, f24) is: "<<f34/ f24 <<endl<<endl;;
    
    Fraction f18(1,8), f28(2,8);
    
    cout<<"f18 is: " << f18<<endl;
    cout<<"f28 is: "<<f28<<endl<<endl;
    
   
    
    cout<<"adding f28 to f18\n";
     f18+=f28;
    cout<<"now, f18 is: " << f18 << endl << endl;
    
    cout<<"subtracting f28 from f18\n";
    f18-=f28;
    cout<<"now, f18 is: " <<f18 <<endl<<endl;
    
    cout<<"multiplying f18 to f28\n";
    f18*=f28;
    cout<<"now, f18 is: " << f18 << endl << endl;
    
    cout<<"dividing f18 to f28\n";
    f18/=f28;
    cout<<"now, f18 is: " << f18 << endl << endl;
    
    cout<<"trying to set f18's denominator to 0...\n";
    f18.den(0);
    cout<<endl<<endl;
    
    
    cout<<"\n\n. . . done\n";
    
    
    
}

