#include<iostream>
#include<vector>
#include<string>
#include "Share_Pointer.h"
#include "Unique_Pointer.h"

using namespace std ;


int main()
{
	   vector<Unique_Pointer<int>> v;
	   Share_Pointer<string> ps(new string("hello"));
           for(int i = 0; i !=10 ; ++i)
	   	v.push_back(Unique_Pointer<int>(new int(i)));

	   for(auto& sp : v)
	    	cout << *sp << "\n";
	    
	   cout << *ps << endl;
	   ps.reset() ;
	   return 0;
}
