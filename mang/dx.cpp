#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
  using namespace std;
  int Giaithua(int n){
  	if(n==0){
  		return 1;
	  }else{
	  	return n*Giaithua(n-1);
	  }
  }
