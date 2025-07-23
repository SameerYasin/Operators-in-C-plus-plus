// SAMEER YASIN
// 24070124092
// ENTC B1

#include<iostream>
using namespace std;

int main(){
    float Maths, EDC, DCLD, Signal_Sys;
    cout << "ENTER THE MARKS IN MATHS" << endl;
    cin >> Maths;
    cout << "ENTER THE MARKS IN EDC" << endl;
    cin >> EDC;
    cout << "ENTER THE MARKS IN DCLD" << endl;
    cin >> DCLD;
    cout << "ENTER THE MARKS IN Signal System" << endl;
    cin >> Signal_Sys;

    float average;
    average = (Maths + EDC + DCLD + Signal_Sys) / 4;
    cout << "::RESULT REPORT::" << endl;
    cout << "THE OVERALL PERCENTAGE IS : " << average << "%" << endl;

    if(average < 100 && average > 90){
        cout << "YOUR GRADE IS :O" << endl;
    } else if(average <= 90 && average > 80){
        cout << "YOUR GRADE IS :A+" << endl;
    } else if(average <= 80 && average > 75){
        cout << "YOUR GRADE IS :A" << endl;
    } else if(average <= 75 && average > 65){
        cout << "YOUR GRADE IS :B" << endl;
    } else if(average <= 65 && average > 60){
        cout << "YOUR GRADE IS :C" << endl;
    } else {
        cout << "YOUR GRADE IS :F" << endl;
    }
    return 0;
}

/*
ENTER THE MARKS IN MATHS
95
ENTER THE MARKS IN EDC
94
ENTER THE MARKS IN DCLD
92
ENTER THE MARKS IN Signal System
93
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 93.5%
YOUR GRADE IS :O

ENTER THE MARKS IN MATHS
85
ENTER THE MARKS IN EDC
82
ENTER THE MARKS IN DCLD
84
ENTER THE MARKS IN Signal System
83
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 83.5%
YOUR GRADE IS :A+

ENTER THE MARKS IN MATHS
78
ENTER THE MARKS IN EDC
79
ENTER THE MARKS IN DCLD
77
ENTER THE MARKS IN Signal System
76
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 77.5%
YOUR GRADE IS :A

ENTER THE MARKS IN MATHS
70
ENTER THE MARKS IN EDC
72
ENTER THE MARKS IN DCLD
68
ENTER THE MARKS IN Signal System
69
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 69.75%
YOUR GRADE IS :B

ENTER THE MARKS IN MATHS
63
ENTER THE MARKS IN EDC
64
ENTER THE MARKS IN DCLD
62
ENTER THE MARKS IN Signal System
61
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 62.5%
YOUR GRADE IS :C

ENTER THE MARKS IN MATHS
50
ENTER THE MARKS IN EDC
55
ENTER THE MARKS IN DCLD
45
ENTER THE MARKS IN Signal System
40
::RESULT REPORT::
THE OVERALL PERCENTAGE IS : 47.5%
YOUR GRADE IS :F
*/
