#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int num; cin>>num;
    double sal; cin>>sal;
    double horas; cin>>horas;
    double total = sal*horas;
    cout<<"NUMBER = "<<num<<endl;
    cout<<"SALARY = U$"<<fixed;
    cout << setprecision(2) <<total<<endl;
    return 0;
}
