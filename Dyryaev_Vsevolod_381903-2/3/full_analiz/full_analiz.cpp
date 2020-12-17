#include "full_analiz.h"

int Full_a::full_analiz(std::string str)
{
    Leks l1;
    
    if (l1.leks_analiz(str))
    {
        Synt sy1;
        Broadcast b1;
        Queue<string> tmp = sy1.synt_analiz(str);
        return b1.broadcast(tmp);
    }
    else
    {
        cout<<"WRONG string!!!\n";
        return 0;
    }
    
}