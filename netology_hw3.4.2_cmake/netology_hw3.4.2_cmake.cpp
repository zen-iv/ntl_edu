// netology_hw3.4.2_cmake.cpp: определяет точку входа для приложения.

#include "netology_hw3.4.2_cmake.h"

TEST_CASE("test Double_linked_list", "test")
{
	SECTION("PUSH_POP") {
		List list;
		list.PushBack(4);
		list.PushBack(5);
		list.PushBack(6);
		CHECK(list.Size() == 3);
		list.PushFront(3);
		list.PushFront(2);
		list.PushFront(1);
		CHECK(list.Size() == 6);
		CHECK(list.PopBack() == 6);
		CHECK(list.PopBack() == 5);
		CHECK(list.Size() == 4);
		CHECK(list.PopFront() == 1);
		CHECK(list.PopFront() == 2);
		CHECK(list.Size() == 2);
	}

	SECTION("Pop_Back_Empty")
	{
		List list;
		bool run_err = false;
		try
		{
			list.PopBack();
		}
		catch (std::runtime_error)
		{
			run_err = true;
		}
		INFO("Expected exception std::runtime_error to be thrown");
		CHECK(run_err);
	}

	SECTION("Pop_Front_Empty")
	{
		List list;
		bool run_err = false;
		try
		{
			list.PopFront();
		}
		catch (std::runtime_error)
		{
			run_err = true;
		}
		INFO("Expected exception std::runtime_error to be thrown");
		CHECK(run_err);
	}
}
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	List list;

	return Catch::Session().run();
}