#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Person
{
	private:
		std::string name;
		std::string addr;
	public:
		std::string getname() const {return name;}
		std::string getaddr() const {return addr;}	
		Person() = default;
		Person(const std::string &mname) {name = mname;};
		Person(const std::string &mname , const std::string &maddr) {name = mname ; addr = maddr;}
	friend std::istream &read(std::istream &is , Person &p);
	friend std::ostream &print(std::ostream &os , const Person &p);
};


	std::istream &read(std::istream &is , Person &p);
	std::ostream &print(std::ostream &os , const Person &p);

class Screen {
	public:
		using pos = string::size_type ;
		Screen() = default ;
		Screen(pos c , pos w , pos h): cursor(c),width(w),height(h) {}
		char get() const { return 'c' ;}
		inline ostream &print(ostream &os);
		Screen &move(pos w,pos h);
		Screen &set(pos c);		
		friend class WindowManager;
	private:
		pos cursor = 0;
		pos width = 0;
		pos height = 0;
	};

inline ostream &Screen::print(ostream &os)
{

	os << cursor << " " << width << " " << height << endl;
	return os;
}

Screen &Screen::move(pos w, pos h)
{
	width = w;
	height = h;
	return *this;
}

Screen &Screen::set(pos c)
{
	cursor = c;
	return *this;
}

class WindowManager {
	public:
		using si = vector<Screen>::size_type;
		void clear(si i);
		si addscreen(const Screen &s); 

	private:
		vector<Screen> screens{Screen(10,9,8)}	;
	};

void WindowManager::clear(si i)
{
	Screen &s = screens[i];
	s.print(cout);
	s.move(0,0).set(0);
	s.print(cout);
}

WindowManager::si WindowManager::addscreen(const Screen &s)
{
	screens.push_back(s);
	return screens.size() - 1 ;

}
