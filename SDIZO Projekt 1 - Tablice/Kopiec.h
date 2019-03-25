class Kopiec
{
public:
	int* tab;
	int length;

public:
	Kopiec();
	void Push(int value);
	void Remove(int value);
	void Repair_From_Last();
	void Find(int value);
	void Print_All();
	void Load_Data();

};