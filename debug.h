#include<bits/stdc++.h>
using namespace std;
#define nl cout<<"\n";
#define ll long long

// premitive types
void print(int x){ cerr << x; }
void print(long x){ cerr << x; }
void print(long long x){ cerr << x; }
void print(unsigned long long x){ cerr << x; }
void print(char x){ cerr << x; }
void print(string x){ cerr << x; }
void print(double x){ cerr << x; }
void print(long double x){ cerr << x;}

// data stractures
template<class T,class V>
void print(pair<T,V> x) 
{ 
	cerr << "{";
	print(x.first);
	cerr << ",";
	print(x.second);
	cerr<<"}";
}
template<class T>
void print(vector<T>v){
	cerr <<"[ ";
	for(T i : v){
		print(i);
		cerr <<" ";
	}
	cerr <<"]";
}
template<class T>
void print(set<T>s){
	cerr <<"[ ";
	for(T i : s){
		print(i);
		cerr <<", ";
	}
	cerr <<"]";
}
template<class T>
void print(multiset<T>s){
	cerr <<"[ ";
	for(T i : s){
		print(i);
		cerr <<", ";
	}
	cerr <<"]";
}
template<class T,class V>
void print(map<T,V>m) 
{ 
	cerr << "{ ";
	for(auto i : m)
	{
		cerr <<"[";
		print(i.first);
		cerr<<"] => ";
		print(i.second);
		cerr<<", ";
	}
	cerr << " }";
}
