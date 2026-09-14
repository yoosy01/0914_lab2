#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

namespace Yoosy2693186
{
    struct student
    {
        int id{}; int score{};
    };
    student inputStudent();
    void printStudent(const student &s);//pass-by-reference
}
#endif