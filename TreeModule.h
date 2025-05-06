#pragma once
template<typename T>
class TreeModule
{
private:
	struct tElement
	{
		T  element;
		T* right;
		T* left;
	};
public:
	TreeModule();
	~TreeModule();

	void addElement(T element);
	T getAndRemoveLastElement();
	unsigned int getSize();
private:
	T removeLastElement();
};

