#include<set>

using namespace std;

class Message ;

class Folder
{
	public:

		void add_Message(Message *m);
		void rm_Message(Message *m);
		int NumofObjects();
	private:
		set<Message *> messages ;

};
