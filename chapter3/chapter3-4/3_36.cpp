#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[] = {1,1,1,1,1};
	int b[] = {2,3,5};
	vector<int> va{2,3,5};
	vector<int> vb{3,4,6};
       // now compare a and b
       auto lena =  end(a) - begin(a) ;
       auto lenb =  end(b) - begin(b) ;
       if (lena != lenb)
       {
       		cout << "a[] != b[]" << endl;
       }
       else{
	       	int flag = 1;
       		for(auto i = 0 ; i < end(a) - begin(a) ; i++)
       		{	if (a[i] != b[i])
			{
				cout << "a[] != b[]" << endl;
				flag = 0;
				break;
       	       		}

		}
		if (flag != 0)
			cout << "a[] == b[]" <<endl;
	    }
        auto pva = va.begin();
	auto pvb = vb.begin();
	while((*pva) == (*pvb))
		pva ++ ;
		pvb ++ ;
	if(pva == va.end() && pvb == vb.end())
		cout << "va == vb" <<endl;
	else 	
		cout << "va != vb" <<endl;
	return 0;
}
