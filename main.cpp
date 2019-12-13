#include<sys/types.h>
#include<regex.h>
#include<string>
#include<stdio.h>
#include<iostream>
#include"lastresult.h"
using namespace std;

int main()
{

	char * result = new char[1024];
	char * test = (char *)"因为人在那，所以地上有了路醉酒单个嘎嘎嘎";
	int start1 = 3;
	int end1 = 4;
	int start2 = 14;
	int end2 = 15;

	EVENT_GetRelation(test, start1, end1, start2, end2, result);

	fprintf(stderr, "%s\n", result);
	delete[]result;
	return 0;

/*
    char * haa =(char*) "人类我因为行走在陆地，从而留下了痕迹。";
    char *pattern1 = (char*)"(.*)(因为)(.*)(从而)(.*)";
    char *pattern2 = (char*)"(.*)(从而)(.*)";
    int istart1 = 1;
    int iend1 = 2;
    int istart2 = 17;
    int iend2 = 18;
    string line = haa;
    string key1;
    string key2;
    if(pattern_t(haa, pattern1, istart1, iend1, istart2, iend2, key1))
        cout << key1 << endl;
    else
        cout << "no match\n";
        
    if(pattern_o(haa, pattern2, istart1, iend1, istart2, iend2, key2))
        cout << key2 << endl;
    else
        cout << "no match\n";*/
    
    /*
    regex_t patt_regex;  //正则存储位置
    size_t nmatch; 
    regmatch_t result[10];//匹配结果
    regcomp(&patt_regex, pattern, REG_EXTENDED|REG_NEWLINE);
    int n = 0;
    while(1)
    { 
        int j = regexec(&patt_regex,haa,sizeof(result)/sizeof(regmatch_t),result,0); 
        if(j != 0)
            break;
        for(int i = 0; i< 100 && result[i]. rm_so  != -1;i++)
        { 
            std::string str;
            str.assign( haa + result[i].rm_so, result[i].rm_eo - result[i].rm_so);
            printf("%d= %s\n",i,str.c_str());
        } 
        string str_result1;
        //str_result1.assign( haa+result[3].rm_so, result[3].rm_eo - result[3].rm_so);
       // if (key_match(line, str_result1, istart1, iend1, key))
          //  cout << "match success" << endl;
    //    else
      //      cout << "no match" << endl;
        if(result[0].rm_so != -1) 
            haa += result[0].rm_eo;
    } 
    regfree(&patt_regex);*/
    return 0;

}