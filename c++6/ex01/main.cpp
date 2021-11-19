#include <iostream>

struct Data
{
	std::string _str_1;
	int _i;
	std::string _str_2;
};

void * serialize(void)
{
	Data *str_ser = new Data;

	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i = -1;
	while(++i < 8)
		str_ser->_str_1 += abc[rand() % 25];
	i = -1;
	while(++i < 8)
		str_ser->_str_2 += abc[(rand() % 11)];
	str_ser->_i = rand() % (INT_MAX - 1);
	return (reinterpret_cast<void*>(str_ser));
}


Data *      deserialize(void * raw)
{
	Data *str_ser = new Data;
	str_ser->_str_1 = std::string(reinterpret_cast<char*>(raw));
	str_ser->_str_2 = std::string(reinterpret_cast<char*>(raw));
	str_ser->_i = *(reinterpret_cast<int*>(raw));
	return (str_ser);
}

int main()
{
	srand (time (0));
	void *ser = serialize();
	Data *des = deserialize(ser);
	std::cout << "str 1: " << des->_str_1 << std::endl;
	std::cout << "str 2: " << des->_str_1 << std::endl;
	std::cout << "int: " << des->_i << std::endl;
	delete (Data*)ser;
	delete des;
	return 0;
}
