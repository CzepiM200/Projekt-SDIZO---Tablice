class Kopiec
{
public:
	int* tab;
	int length;
private: 
	bool pom;
public:
	Kopiec();
	void Push(int value);
	void Remove(int value);
	void Repair_From_Last();
	void Repair_From(int index);
	void Find(int value);
	void Set_Flag(int value, int parent);
	void Print_All();
	void Load_Data();

};