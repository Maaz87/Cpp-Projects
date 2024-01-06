#include <iostream>
using namespace std;

int main (){
int percent;
cout<< " Please enter your percent: ";
cin>> percent;
if ( percent>=85)
{
    cout<<" Your grade is A+ ";
}  else if  (percent >= 75) {
    cout<< " Your grade is A ";
} else if (percent >=60 )
{
    cout<< " Your grade is B ";
} else if ( percent >=45 ){
    cout<< "your grade is c ";
} else if ( percent >= 35 ){
    cout << " Your grade is d ";
} else {
    cout << " failed ";
}



return 0;
}






