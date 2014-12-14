//
//  teacherstudent.cpp
//  feng
//
//  Created by 李峰 on 14/12/14.
//  Copyright (c) 2014年 李峰. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
class person{
protected:
    string cno,name;
    public:
    
    person(string c,string n){
        cno = c;
        name = n;
    }
        void display(){
            cout<<"姓名为："<<name<<"编号为："<<cno;
        }
    
    
};

class student:public person{
    private:
        string classno;
        float score;
public:
    student(string c,string n,string cn,float s):person(c,n){
        classno = cn;
        score = s;
    }
    void display(){
       cout<<"学生的姓名为:"<<name<<",学生的编号为："<<cno<<",学生的班级为："<<classno<<",学生的成绩为："<<score<<endl;
    }
    };

class teacher:public person{
    private:
        string title,depart;
public:
        teacher(string c,string n,string t,string d):person(c,n){
        title = t;
        depart = d;
    }
    void display(){
        cout<<"老师的姓名为:"<<name<<",老师的编号为："<<cno<<",老师的职称："<<title<<",老师的部门为："<<depart<<endl;
    }
};
int main(){
    
    student s("20110101","张三","四班",80.5);
    teacher t("20020101","王老师","教授","计算机系");
    s.display();
    t.display();
}

