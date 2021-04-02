#include <iostream>

struct          Data
{
	std::string s1;
	int         n;
	std::string s2;
};

void*           serialize(void)
{
	static std::string  alpha = "0123456789AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char*               ret = new char[sizeof(std::string) + sizeof(int) + sizeof(std::string)];
    std::string         s1;
    int                 n;
    std::string         s2;

	for (std::size_t i = 0; i < 8; i++)
    {
		s1 += alpha[rand() % alpha.length()];
		s2 += alpha[rand() % alpha.length()];
    }
    n = rand();
    *reinterpret_cast<std::string*>(ret) = s1;
    *reinterpret_cast<int*>(ret + sizeof(std::string)) = n;
    *reinterpret_cast<std::string*>(ret + sizeof(std::string) + sizeof(int)) = s2;
	return (ret);
}

Data*           deserialize(void* raw)
{
	Data*   data = new Data;
    data->s1 = *reinterpret_cast<std::string *>(raw);
    data->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + sizeof(std::string));
    data->s2 = *reinterpret_cast<std::string *>(reinterpret_cast<char *>(raw) + sizeof(std::string) + sizeof(int));
	return (data);
}

int             main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << ": " << '\n';
		void*   raw = serialize();
		Data*   data = deserialize(raw);

		std::cout << "\ts1: " << data->s1 << '\n';
		std::cout << "\t n: " << data->n << '\n';
		std::cout << "\ts2: " << data->s2 << std::endl;

		delete reinterpret_cast<char *>(raw);
		delete data;
	}
	return (0);
}