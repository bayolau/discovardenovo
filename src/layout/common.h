// Copyright (c) 2000-2003 Whitehead Institute for Biomedical Research
// 


#ifndef COMMON
#define COMMON

#include <iosfwd>
#include <fstream>

using namespace std;

//
// The following are our standard output streams
//
extern ofstream cnull; 
extern ofstream cloga;
extern ofstream clogs;
extern ofstream permanent_file;


void coutDot();                     /* Outputs a dot in cout */

void coutDot(int inti, int intmod); /* Outputs a dot in cout if
				       inti%intmod == 0 */

void clogaDot();                    /* Outputs a dot in cloga */

void clogaDot(int, int);            /* Outputs a dot in cloga if
				       inti%intmod == 0 */

#endif
