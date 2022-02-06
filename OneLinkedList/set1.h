#include "double_linked_list.h"



namespace dll
{
	template <class T>
	class Set :private dll::DoubleLinkedList<T>
	{
		using Parent = dll::DoubleLinkedList<T>;
	public:
		size_t Size() const { return Parent::Size(); }
		std::string ToString() const { return Parent::ToString(); }

		void push(T val)
		{
			if (!Parent::Has(val))
				Parent::push_back(val);
		}
		
		void pop() {
			Parent::pop_back();
		}

	};
}//namespace dll