#include "Message.h"
#include "Folder.h"

void Folder::add_Message(Message *m)
{
	messages.insert(m);
}

void Folder::rm_Message(Message *m)
{
	messages.erase(m);
}

int Folder::NumofObjects()
{
	return messages.size();
}
