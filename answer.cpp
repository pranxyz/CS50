#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<iostream>
#include<vector>

using namespace std;

class MapGeneric{
private:

virtual int f(int x) = 0;

public:
vector<int> mapL(vector<int> a){

vector<int> mappedA;
mappedA.clear();
if(a.size() == 0){
return mappedA;
}else{
int x = a[a.size()-1];
a.pop_back();
mappedA = mapL(a);
mappedA.push_back(this->f(x));
return mappedA;
}
}

};

class MapTriple: public MapGeneric {
private:
int f(int x){
return 3*x;
}

};

class MapSquare: public MapGeneric {
private:
int f(int x){
return x*x;
}

};

class MapAbsoluteValue: public MapGeneric {
private:
int f(int x){
if(x < 0)
return x*-1;
return x;
}
};

class FilterGeneric {

private:
virtual bool g(int x) = 0;

public:
vector<int> filterL(vector<int> a){

vector<int> mappedA;
mappedA.clear();
if(a.size() == 0){
return mappedA;
}else{
int x = a[a.size()-1];
a.pop_back();
mappedA = filterL(a);
if(g(x))
mappedA.push_back(x);
return mappedA;
}
}

};


class FilterOdd: public FilterGeneric{

private:
bool g(int x){
if(x%2==1){
return true;
}else{
return false;
}
}

};


class FilterNonPositive: public FilterGeneric{
private:
bool g(int x){
if(x < 0)
return true;
return false;
}
};

class FilterForTwoDigitPositive: public FilterGeneric{

private:

bool g(int x){

if(x > 0 && x/100 == 0){
return true;
}
return false;

}

};

class ReduceGeneric{
private:
virtual int binOp(int a,int b) = 0;

public:
int reduce(vector<int> a){

if(a.size() == 1){
return a[0];
}else{
int x = a[a.size()-1];
a.pop_back();
int z = reduce(a);
return binOp(x,z);
}
}

};


class ReduceMinimum: public ReduceGeneric{

private:
int binOp(int a,int b){
if(a < b)
return a;
else
return b;
}
};

class ReduceGCD: public ReduceGeneric{

private:
int binOp(int a,int b){
int temp;
if(b > a){
temp = a;
a = b;
b = temp;
}
// a > b
if(a%b ==0)
return b;
return binOp(b,a%b);
}

};

int convertStrToInt(char *a,int len){

int x=1,i=0;
int sum = 0;

if(a[0]=='-'){
//negative integer
x = -1;
i = 1;
}

while(i < len){
sum = sum*10 + a[i]-48;
i = i+1;
}

return sum*x;

}


int main(int argc,char** argv){
int i,j,x;
vector<int> a;
for(int i = 1;i<argc;i++){

if(i!=argc-1){
x = convertStrToInt( argv[i],strlen(argv[i])-1 );
}else{
x = convertStrToInt( argv[i],strlen(argv[i]) );
}
a.push_back(x);
}
vector<int> l;
MapTriple o1;
l = o1.mapL(a);
MapAbsoluteValue o2;
l = o2.mapL(l);
FilterOdd o3;
l = o3.filterL(l);
FilterForTwoDigitPositive o4;
l = o4.filterL(l);
ReduceMinimum o5;
int m = o5.reduce(l);
ReduceGCD o6;
int gcd = o6.reduce(l);
cout << m << " " << gcd << endl;

return(0);
}

//test using g++ -o test -std=c++11 -O2 -Wall answer.cpp