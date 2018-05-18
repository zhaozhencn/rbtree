#include "rbtree.h"

int main(int argc, char* argv[])
{
	rb_tree<int> tree;
	int data[] = { 12, 1, 9, 2, 0, 11, 7, 19, 4, 15, 18, 5, 14, 13, 10, 16, 6, 3, 8, 17 };
	int max_len = sizeof(data) / sizeof(int);
	std::cout << "test_rb_tree: insert" << std::endl;
	for (auto i = 0; i < max_len; ++i)
	{
		auto debug = data[i];
		tree.insert(debug);
	}

	std::cout << "test_rb_tree: dump" << std::endl;
	tree.dump();
	std::cout << "test_rb_tree: height" << std::endl;
	std::cout << "height: " << tree.height() << std::endl;

	for (auto i = 0; i < max_len; ++i)
	{
		auto debug = data[i];
		tree.erase(debug);
		std::cout << "test_rb_tree: height: " << tree.height() << " erase: " << debug << std::endl;
		std::cout << "test_rb_tree: dump" << std::endl;
		tree.check_rb_feature_5();
		tree.dump();
	}

	return 0;
}




