#include <stdio.h>
#include <stdint.h>
#include "protocol.pb.h"
int32_t main()
{
	Student *student1 = new Student();
	student1->set_age(1);
	student1->set_name("tom");
	student1->set_score(98.5);
	for (uint32_t i = 0; i < 5; ++i)
	{
		char name[32] = { 0 };
		sprintf_s(name, 32, "book_%d", i);
		Book *pBook = student1->add_arrbook();
		pBook->set_name(name);
		pBook->set_price(1.2f * (i + 1));
		pBook->set_pages((i + 1) * 15);
	}
	printf("%s\n", student1->DebugString().c_str());
	char buf[1024] = { 0 };
	int32_t len = student1->ByteSize();
	student1->SerializeToArray(buf, len);
	printf("btye size = %d\n", len);

	Student student2;
	student2.ParseFromArray(buf, len);
	printf("%s\n", student2.DebugString().c_str());
	getchar();
	return 0;
}