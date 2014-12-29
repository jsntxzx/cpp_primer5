#include<set>
#include<string>

using namespace std;

class Folder;

class Message
{
	friend class Folder;
	public:
		explicit  Message(const string &s = "");
		Message(const Message &m);
		Message &operator=(const Message &);
		~Message();
		void save(Folder &);
		void remove(Folder &);
	private:
		string contents;
		set<Folder*> folders;
		void add_to_Folders(const Message &);
		void rm_from_Folders();
};
