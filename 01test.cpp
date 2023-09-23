#include"Lists.cpp"
#include"catch2/catch_test_macros.hpp"
#include"catch2/catch_session.hpp"

TEST_CASE("Lists", "[F1]")
{
	List l;
	CHECK(l.Empty() == true);
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	CHECK(l.Size() == 3);
	l.Clear();
	CHECK(l.Size() == 0);
}

int main()
{
	Catch::Session().run();
	std::system("pause");
	return 0;
}
