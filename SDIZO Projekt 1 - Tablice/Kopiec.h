class Kopiec
{
public:
	int* tab;
	int length;

public:
	Kopiec();
	void Push(int value);
	void Remove(int value);
	void Find(int value);
	void Print_All();
	void Load_Data();

};