#pragma once
#include <gtest/gtest.h>
#include <string>
#include "full_analiz.h"

using namespace std;

TEST(Full_a,create)
{
    ASSERT_NO_THROW(Full_a f1);
}


TEST(Full_a,correct_simpel_expression)
{
    Full_a f1;
    string str={"10+4"};
    int correct_answer=14;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}

TEST(Full_a,simpel_expression)
{
    Full_a f1;
    string str={"10+4"};
    int correct_answer=14;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}

TEST(Full_a,hard_expression)
{
    Full_a f1;
    string str={"10+8/4*(24+18-(100-40)/(14+6))"};
    int correct_answer=88;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}

TEST(Full_a,wrong_plus_expression)
{
    Full_a f1;
    string str={"10+8/4*(24+18+-(100-40)/(14+6))"};
    int correct_answer=0;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}




TEST(Full_a,wrong_skobka_pered_expression)
{
    Full_a f1;
    string str={"10+8/4*((24+18-(100-40)/(14+6))"};
    int correct_answer=0;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}

TEST(Full_a,wrong_skobka2_zad_expression)
{
    Full_a f1;
    string str={"10+8/4*(24+18)-(100-40)/(14+6))"};
    int correct_answer=0;
    
    EXPECT_EQ(correct_answer,f1.full_analiz(str));
}





