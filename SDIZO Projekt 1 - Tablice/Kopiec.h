class Kopiec
{
public:
	int* tab;
	int length;
private: 
	bool pom;
	int index;
public:
	Kopiec();
	void Push(int value);
	void Remove(int value);
	void Repair_Down_From_Last();
	void Repair_Up_From_Index();
	void Find(int value);
	void Print_All();
	void Load_Data();
private:
	void Set_Flag(int value, int parent);
};