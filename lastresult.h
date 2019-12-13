#ifndef _LASTRESULT_H_
#define _LASTRESULT_H_

#include<sys/types.h>
#include<regex.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<vector>
#include<iostream>
#include <ctype.h>
#define _GLIBCXX_USE_CXX11_ABI 0
using namespace std;
bool key_match(string line, string result_split, int start, int end, string & keyword);
bool pattern_t(char* input, char*pattern, int istart1, int iend1, int istart2, int iend2, string &output);
bool pattern_o(char* input, char* pattern, int istart1, int iend1, int istart2, int iend2, string &output);
bool pattern_o(char* input, string pattern, int istart1, int iend1, int istart2, int iend2, string &output);
int EVENT_GetRelation(char *sen, int istart1, int iend1, int istart2, int iend2, char *result);


#endif