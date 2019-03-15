class Tablica
{
public:
	int* tab;
	int length;

public:
	Tablica();
	~Tablica();
	void Push_Front(int value);
	void Push_Back(int value);
	void Push_Middle(int value, int index);
	void Remove_Front();
	void Remove_Back();
	void Remove_Middle(int index);
	bool Find(int value);
	void Print_Selected(int index);
	void Print_All();
	void Creata_Data(int size);

};