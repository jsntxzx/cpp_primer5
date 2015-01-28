#include<iostream>
#include<utility>
#include<string>
#include<memory>

using namespace std ;

template<typename T ,typename ... Args > shared_ptr<T> my_makeshare(Args && ...rest)
{
	shared_ptr<T> ret(new T(std::forward<Args>(rest)...));
	return ret ;
}

int main()
{
	auto p = my_makeshare<string>("heloo");
	cout << *p << endl;
	return 0 ;
}
