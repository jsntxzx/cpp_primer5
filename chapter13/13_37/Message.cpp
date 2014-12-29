#include "Folder.h"
#include "Message.h"

Message::Message(const string &s)
{
	contents = s;
}

Message::Message(const Message &m)
{
	contents = m.contents ;
	folders = m.folders ;
	add_to_Folders(m);
}

Message &Message::operator=(const Message &m)
{
	rm_from_Folders();
	contents = m.contents ;
	folders = m.folders ;
	add_to_Folders(m);
	return *this;
}

Message::~Message()
{
	rm_from_Folders();
}


void Message::save(Folder &f)
{
	folders.insert(&f);
	f.add_Message(this);
}

void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.rm_Message(this);
}

//add this to m's folders
void Message::add_to_Folders(const Message &m)
{
	for(auto f : m.folders)
		f -> add_Message(this);
}

//remove this from folders
void Message::rm_from_Folders()
{
	for(auto f : folders)
		f -> rm_Message(this);
}
