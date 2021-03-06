/*
    Charles Collupy
    5/22/2022
    Simulation Map using Loops
*/

// iosstream header file
#include <iostream>
// string header file
#include <string>
// std standardizes and takes away the need for future prefixes
using namespace std;

// function where you want your program to output
int main (){
    // This is an array with 50 elements
    string rows[50] = { 
"	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	"	,
"	9	1	9	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	9	7	9	7	9	7	9	7	9	7	9	5	9	7	9	7	9	5	9	7	9	7	9	7	9	9	"	,
"	9	0	9	0	9	9	0	0	5	5	0	9	9	0	9	0	6	2	6	0	6	6	0	0	0	0	0	8	0	0	0	0	0	0	0	0	8	0	0	0	0	0	0	0	8	0	0	0	0	9	"	,
"	9	0	9	0	5	5	0	0	9	9	0	5	5	0	9	0	6	0	0	0	6	0	6	0	9	7	9	7	9	5	9	7	9	7	9	7	9	7	9	0	0	0	7	9	7	9	7	9	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	0	0	0	9	0	7	0	0	0	0	0	2	0	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	0	9	9	9	9	9	9	0	0	9	"	,
"	9	0	9	9	9	9	9	9	9	9	0	9	9	9	9	0	6	0	5	2	5	6	6	0	9	7	0	0	0	0	0	0	7	9	0	0	0	0	0	0	0	0	0	0	0	0	9	0	9	9	"	,
"	9	0	0	0	0	0	0	0	0	0	0	0	0	7	9	0	7	0	0	0	0	0	5	0	9	0	0	0	0	0	0	0	7	9	0	0	0	0	0	0	9	9	0	6	6	0	9	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	0	0	0	9	0	6	0	6	7	7	6	6	0	9	0	0	8	0	0	9	9	9	9	0	0	9	9	0	0	9	9	0	8	6	0	9	9	0	9	"	,
"	9	0	9	6	6	0	0	6	0	0	0	6	0	0	9	0	6	0	0	0	0	0	0	0	9	0	0	8	0	0	9	2	0	9	0	0	9	9	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	7	6	0	0	0	0	6	0	0	0	0	9	0	0	0	0	8	0	0	0	0	9	0	8	0	0	0	9	6	0	9	0	0	7	7	0	0	8	0	0	0	0	0	9	0	9	9	"	,
"	9	0	9	6	6	6	0	6	0	0	0	6	0	0	9	9	9	9	9	9	9	9	0	9	9	0	0	0	8	0	9	2	0	9	0	0	0	0	0	0	0	0	0	9	9	0	9	0	0	9	"	,
"	9	0	9	6	8	5	0	0	0	6	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	2	0	9	0	0	0	0	8	0	0	8	0	9	9	0	9	9	0	9	"	,
"	9	8	9	6	6	6	0	6	0	0	0	6	0	0	0	6	0	0	0	6	0	0	0	9	9	9	9	9	9	0	9	6	0	9	0	0	0	0	0	0	0	0	0	0	0	0	9	0	8	9	"	,
"	9	0	9	6	6	5	0	0	0	6	0	0	0	6	0	0	8	6	0	0	0	6	0	9	7	0	0	0	0	0	9	9	0	9	7	0	0	0	0	0	8	0	0	0	0	0	9	0	9	9	"	,
"	9	0	9	6	6	6	0	6	0	0	0	6	0	0	0	6	0	0	0	6	0	0	0	9	5	0	8	0	0	0	0	9	0	9	9	9	0	0	0	0	0	0	0	0	0	0	9	8	0	9	"	,
"	9	0	9	7	6	0	0	0	8	6	0	0	0	6	0	0	0	6	0	0	0	6	0	9	7	0	0	0	0	0	5	9	0	0	7	0	0	0	0	0	0	7	9	9	0	0	9	9	0	9	"	,
"	9	0	9	6	6	0	0	6	0	0	0	6	0	0	0	6	0	0	0	6	0	0	0	9	9	9	9	9	9	9	9	9	0	0	0	0	0	9	0	0	0	7	9	9	0	0	9	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	8	0	0	0	0	0	0	0	0	0	0	6	0	9	0	0	0	0	0	0	0	0	0	8	0	8	0	9	0	0	0	0	0	0	0	0	9	0	9	9	"	,
"	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	9	7	0	0	0	0	0	0	7	9	0	0	9	"	,
"	9	0	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	0	9	9	9	9	9	9	0	0	0	0	0	0	0	0	0	0	7	9	0	9	9	9	9	9	9	9	9	9	9	9	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	6	9	0	0	7	9	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	2	9	0	0	7	9	9	0	0	0	0	0	0	0	9	0	9	5	9	0	9	0	9	0	0	0	9	9	"	,
"	9	0	9	0	0	9	9	9	0	9	0	9	9	9	0	0	9	0	2	2	6	0	2	9	0	0	0	5	5	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	0	0	9	0	0	0	0	0	0	0	9	0	0	9	0	0	0	0	0	6	9	0	0	0	0	0	0	0	0	0	0	7	9	0	9	9	9	9	9	9	9	9	9	9	9	0	9	"	,
"	9	0	9	0	8	9	0	9	0	9	0	9	0	9	0	0	9	0	6	6	2	0	2	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	6	6	0	6	6	0	6	9	0	0	9	"	,
"	9	8	9	0	0	0	0	5	0	7	0	5	0	0	0	0	9	0	0	0	0	0	2	9	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	9	9	"	,
"	9	0	9	0	0	9	0	9	0	9	0	9	0	9	0	0	9	0	0	0	0	0	6	9	0	0	8	0	0	0	5	9	9	0	0	0	0	0	0	0	0	0	0	0	0	6	9	0	0	9	"	,
"	9	0	9	0	0	9	0	0	0	0	0	0	0	9	0	0	9	0	6	2	6	0	2	9	0	0	0	0	0	0	0	7	7	0	0	0	0	0	0	0	0	0	0	0	0	6	9	9	0	9	"	,
"	9	0	9	0	0	9	9	9	0	9	0	9	9	9	0	0	9	0	0	0	0	0	6	9	0	0	0	0	0	0	0	0	0	0	0	0	0	5	9	9	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	8	0	0	0	0	9	0	2	6	2	0	2	9	0	0	0	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	9	0	9	9	"	,
"	9	0	9	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	2	9	0	0	9	9	5	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	6	9	8	0	9	"	,
"	9	0	9	0	0	9	9	0	0	0	0	0	9	9	0	0	9	0	0	0	0	0	6	9	0	0	9	9	5	0	0	0	0	0	0	0	0	0	0	0	8	0	0	0	0	6	9	9	0	9	"	,
"	9	0	0	0	0	9	9	0	9	0	9	0	9	9	0	0	9	9	9	9	9	9	9	9	0	0	7	7	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	7	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	0	0	0	0	6	9	0	9	9	"	,
"	9	0	9	0	0	0	0	0	0	7	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	0	0	0	0	6	9	0	0	9	"	,
"	9	0	9	0	0	9	9	0	9	0	9	0	9	9	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	7	7	0	0	0	0	5	7	0	0	0	0	0	9	9	0	9	"	,
"	9	0	9	0	0	9	9	0	0	0	0	0	9	9	0	0	9	0	0	2	6	2	6	2	6	0	0	8	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	0	0	9	"	,
"	9	0	9	0	0	0	0	0	0	9	0	0	0	0	0	0	9	0	0	6	2	6	2	6	2	0	0	0	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	9	9	0	9	"	,
"	9	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	6	9	0	0	9	"	,
"	9	0	9	0	9	9	0	9	9	0	9	9	0	9	9	0	9	0	0	0	0	0	0	0	0	0	0	0	0	7	5	0	0	0	0	0	0	0	0	0	0	0	0	0	0	6	9	0	9	9	"	,
"	9	0	9	0	9	0	0	0	0	0	0	0	0	0	9	0	9	0	0	0	0	0	0	0	0	0	0	0	0	9	9	7	0	0	0	0	8	0	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	0	9	0	9	0	6	2	0	0	0	2	6	0	9	0	9	9	9	9	9	9	9	9	9	0	0	0	0	9	9	7	0	0	0	0	0	0	0	0	0	0	0	0	0	6	9	9	0	9	"	,
"	9	0	9	0	9	0	6	6	8	0	0	2	6	0	9	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	5	9	9	0	0	0	0	0	0	0	0	9	0	0	9	"	,
"	9	8	9	0	9	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	7	9	9	0	0	0	0	0	0	0	0	9	0	9	9	"	,
"	9	0	9	0	9	9	9	9	7	0	7	9	9	9	9	0	0	6	6	0	0	6	0	0	0	0	9	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	7	9	9	0	9	0	0	9	"	,
"	9	0	9	0	0	0	7	9	9	0	9	9	0	0	0	0	0	6	6	0	0	6	0	0	0	0	9	9	0	0	0	0	0	0	0	0	0	0	0	0	0	5	7	9	9	0	9	9	0	9	"	,
"	9	0	9	0	6	0	0	7	9	0	9	6	0	0	8	0	0	6	6	0	0	6	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	9	5	0	0	0	0	0	9	"	,
"	9	0	9	0	0	6	0	0	9	5	9	5	0	0	0	0	0	0	0	0	0	0	0	0	9	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	9	9	0	9	0	9	9	0	9	"	,
"	9	0	0	0	0	0	0	7	9	7	9	6	0	0	0	0	0	0	8	0	0	0	0	0	9	0	0	6	6	0	6	6	0	0	6	6	0	0	6	0	0	0	0	0	0	0	9	5	0	9	"	,
"	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	9	"	,
    };
	
    // repeats for loop until i = 49
    for(int i = 0; i <= 49; ++i){
        // outputs the array elements with count i
        // "\n" adds spacing
        // endl starts a new row
        cout << rows[i] + "\n\n" << endl;
    }
    
    // A return 0 means that the program will execute successfully and did what it was intended to do.
    return 0;
}
