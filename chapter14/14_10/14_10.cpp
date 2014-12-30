#include"Sales_data.h"

using namespace std;

int main()
{
	Sales_data item1 ;
	cin >> item1 ;
	cout << item1 << endl ;
	Sales_data item2 ;
	item2 = item1 ;
	cout << item1 + item2 << endl;
	return 0;
}
