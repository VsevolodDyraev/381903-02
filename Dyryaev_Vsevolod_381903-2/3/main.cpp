#include <iostream>
#include <string>
#include "synt.h"
#include "broadcast.h"
#include "leks.h"
#include "full_analiz.h"

using namespace std;


int main()
{

    
    string str={"12-(5+2/2-4*(12-4))*4"};

    Full_a f1;
    cout<<f1.full_analiz(str);    


    cout<<endl;
    
    return 0;
}