#include "broadcast.h"
#include <math.h>

using namespace std;
int perevod_str_in_int(string);
float perevod_str_in_float(string);

int Broadcast::broadcast(Queue<string>& q1)
{
    Stack<float> s1;
    string tmp = {" "};
    //q1.print();

    while (!q1.isEmpty())
    {
        tmp = q1.pop();
        //cout<<tmp<<endl;
        float result=0.0f;
        if (tmp[0] != '+' && tmp[0] != '-' && tmp[0] != '*' && tmp[0] != '/')
        {
            int z=perevod_str_in_float(tmp);
            //cout<<"Z: "<<z<<endl;
            s1.put(z);
            continue;
        }
        else
        {
            float b = s1.pop();
            float a = s1.pop();
            switch (tmp[0])
            {
            case '+':
                result = a + b;
                s1.put(result);
                break;
            case '-':
                result = a - b;
                s1.put(result);
                break;
            case '*':
                result = a * b;
                s1.put(result);
                break;
            case '/':
                result = a / b;
                s1.put(result);
                break;

            default:
                break;
            }
            //cout<<tmp[0]<<endl;
            //cout<<"result: "<<result<<endl;
        }
    }
    cout<<endl;
    return s1.pop();
}


int perevod_str_in_int(string str)
{
    int tmp=0;
    Stack<int> s;
    int z =str.length();
    for(int i=0;i<str.length();i++)
    {
        switch (str[i])
        {
        case '0':
            s.put(0);
            break;
        case '1':
            s.put(1);
            break;
        case '2':
            s.put(2);
            break;
        case '3':
            s.put(3);
            break;
        case '4':
            s.put(4);
            break;
        case '5':
            s.put(5);
            break;
        case '6':
            s.put(6);
            break;
        case '7':
            s.put(7);
            break;
        case '8':
            s.put(8);
            break;
        case '9':
            s.put(9);
            break;
        
        default:
            break;
        }
    }
    int i=0;
    while(!s.isEmpty())
    {
        
        tmp+=s.pop()*pow(10,i);
        i++;
    }
   
    return tmp;
}

float perevod_str_in_float(string str)
{
    int tmp=0;
    Stack<int> s;
    int z =str.length();
    for(int i=0;i<str.length();i++)
    {
        switch (str[i])
        {
        case '0':
            s.put(0.0f);
            break;
        case '1':
            s.put(1.0f);
            break;
        case '2':
            s.put(2.0f);
            break;
        case '3':
            s.put(3.0f);
            break;
        case '4':
            s.put(4.0f);
            break;
        case '5':
            s.put(5.0f);
            break;
        case '6':
            s.put(6.0f);
            break;
        case '7':
            s.put(7.0f);
            break;
        case '8':
            s.put(8.0f);
            break;
        case '9':
            s.put(9.0f);
            break;
        
        default:
            break;
        }
    }
    int i=0;
    while(!s.isEmpty())
    {
        
        tmp+=s.pop()*pow(10,i);
        i++;
    }
   
    return tmp;
}

string perevod_int_in_str(int integ)
{
    Stack<int> s;
    string str={""};
    int tmp=0;
    int i=1;
    while (integ)
    {
        int z = pow(10, i);
        tmp = integ % z / pow(10, i-1);
        s.put(tmp);
        integ-=tmp*pow(10,i-1);
        i++;
    }
    while(!s.isEmpty())
    {
        switch (s.pop())
        {
        case 1:
            str+="1";
            break;
        case 2:
            str+="2";
            break;
        case 3:
            str+="3";
            break;
        case 4:
            str+="4";
            break;
        case 5:
            str+="5";
            break;
        case 6:
            str+="6";
            break;
        case 7:
            str+="7";
            break;
        case 8:
            str+="8";
            break;
        case 9:
            str+="9";
            break;
        
        default:
            break;
        }
    }
    return str;
}