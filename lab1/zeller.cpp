//zeller.cpp
#include "mlisp.h"

//for showing full date (with the year)
//#define YEAR

double day__of__week();
double zeller(double d, double m, double y, double c);
double neg__to__pos(double d);
double birthday(double dw);
double dd = 10;
double mm(2);
double yyyy(2002);



double neg__to__pos(double d){
 return (d < 0. ? d + 7.
         : true ? d
         : _infinity
        );
}
double birthday(double dw){
 display("Your were born on ");

dw == 1 ? display("Monday "):
dw == 2 ? display("Tuesday "):
dw == 3 ? display("Wednesday "):
dw == 4 ? display("Thursday "):
dw == 5 ? display("Friday "):
dw == 6 ? display("Saturday "):
dw >= 7 ? display("Sunday "): display("Sunday ");

display(dd);
display(".");
display(mm);
display(".");
 return  yyyy;
}

double zeller(double d, double m, double y, double c){
 return neg__to__pos(remainder(d + y + quotient(26*m - 2, 10) + quotient(y, 4) 
 + quotient(c, 4) + 2*(-c), 7));
}

double day__of__week(){
        if (mm < 3)
        {
                return zeller(dd, mm + 10, remainder(yyyy - 1, 100), quotient(yyyy - 1, 100));
        }else{
                return zeller(dd, mm - 2, remainder(yyyy, 100), quotient(yyyy, 100));
        }
}
int main(){
 #ifdef YEAR
        display(birthday(day__of__week()));
 #endif
 birthday(day__of__week());
 newline();

 std::cin.get();
 return 0;
}
