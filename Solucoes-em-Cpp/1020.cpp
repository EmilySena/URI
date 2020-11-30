#include <iostream>
 
using namespace std;
 
int main() {
 
    int dias; cin>>dias;
    int anos = dias/365;
    int mes = (dias%365)/30;
    int resto =((dias%365)%30);
    cout<<anos<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<resto<<" dia(s)"<<endl;
 
    return 0;
}
