#include"google/protobuf/compiler/importer.h"
#include"google/protobuf/dynamic_message.h"
#include<string.h>
#include <iostream>

using namespace std;
using namespace google::protobuf::compiler;
using namespace google::protobuf;

class MyMultiFileErrorCollector : public MultiFileErrorCollector
{
	void AddError(const string &filename, int line, int column, const string &message)
	{

	}
};

int main(int argc, char* argv[])
{
	DiskSourceTree dt;
	MyMultiFileErrorCollector collect;
	dt.MapPath("", "./");
	Importer im(&dt, &collect);

	const FileDescriptor *fd = im.Import("test.proto");
	const Descriptor *desc = fd->pool()->FindMessageTypeByName("test");
	MessageFactory *factory = new DynamicMessageFactory(fd->pool());
	Message *msg = factory->GetPrototype(desc)->New();

	const FieldDescriptor *fieldID = desc->FindFieldByName("id");
	const FieldDescriptor *fieldName = desc->FindFieldByName("name");

	const Reflection *ref = msg->GetReflection();
	ref->SetInt32(msg, fieldID, 5);
	ref->SetString(msg, fieldName, "XiaoMing");

	int32 value = ref->GetInt32(*msg, fieldID);
	string name = ref->GetString(*msg, fieldName);

	cout << value << endl;
	cout << name << endl;
	getchar();
	return 0;

}


