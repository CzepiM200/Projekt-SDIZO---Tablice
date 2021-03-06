class Lista
{
	public:
		struct Element
		{
			Element(int newValue)
			{
				value = newValue;
				next = nullptr;
			}

			Element * next;
			Element * prev;
			int value;
		};
		Element * first;

	public:
		Lista();
		virtual ~Lista();
		void Push_Front(int value);
		void Push_Back(int value);
		void Push_Middle(int value, int index);
		void Remove_Front();
		void Remove_Back();
		void Remove_Middle(int index);
		bool Find(int value);
		void Print_Selected(int index);
		void Print_All();
		void Load_Data();
};