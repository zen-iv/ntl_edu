// netology_hw3.4.1_cmake.cpp: определяет точку входа для приложения.

#include "netology_hw3.4.1_cmake.h"

TEST_CASE("testing Double_linked_list", "test")
{
	SECTION("Empty") {
		List list;
		CHECK(list.Empty() == true);
	}
	SECTION("Size") {
		List list;
		list.PushBack(4);
		list.PushBack(5);
		list.PushBack(6);
		CHECK(list.Size() == 3);
		list.PushFront(3);
		list.PushFront(2);
		list.PushFront(1);
		CHECK(list.Size() == 6);
		list.PopBack();
		CHECK(list.Size() == 5);
		list.PopFront();
		CHECK(list.Size() == 4);
	}
	SECTION("Clear") {
		List list;
		list.PushBack(4);
		list.PushBack(5);
		list.PushBack(6);
		list.Clear();
		CHECK(list.Size() == 0);
		CHECK(list.Empty() == true);
	}
}

int main(int argc, char** argv) {
	List list;

	return Catch::Session().run();
}