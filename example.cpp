#include "Main.h"

int main()
{
  // protect your paths with Xor or anything
	auto cheat_path = ("C:\\Windows\\System32\\sex.dll");
  auto mapper_path = ("C:\\Windows\\System32\\msfthost.exe");
  
  Utilities::CreateFileFromMemory(cheat_path, reinterpret_cast<const char*>(cheat), sizeof(cheat));
	Utilities::CreateFileFromMemory(mapper_path, reinterpret_cast<const char*>(mapper), sizeof(mapper));


	system("C:\\Windows\\System32\\msfthost.exe C:\\Windows\\System32\\dll.dll");
	
	remove("C:\\Windows\\System32\\sex.dll");
  remove("C:\\Windows\\System32\\msfthost.exe");
}
