//Задача 2. Таблица
//Описание
//Нужно написать шаблонный класс для двумерного массива(таблицы).Все ячейки таблицы имеют один и тот же тип данных T.
//
//Требования к классу :
//
//Должен быть конструктор, получающий на входе два целых числа — количество строк и столбцов соответственно.
//Должны быть константная и неконстантная версии оператора[], возвращающего массив, к которому снова можно применить оператор[].
//Нужно, чтобы работали конструкции вида :
//*cout << table[i][j]; *table[i][j] = value; .
//
//Должна быть константная функция Size, возвращающая размер таблицы.
#include <iostream>
#include <string>
#include <cassert>
#include <initializer_list>

template <typename T>
class Table
{
private:
		class Row;
public:
	class Row;
	Table(std::initializer_list<std::initializer_list<T>> list)
	{
		if (list.size() > 0)
		{
			_rows = list.size();
			_table = new Row[list.size()];
			int i = 0;
			for (auto var : list)
			{
				_table[i++] = Row{ var };
			}
		}
		else
		{
			_rows = 0;
			_table = nullptr;
		}		
	}
	Table(const int &rows,const int &columns)
	{
		if (rows > 0 && columns > 0)
		{
			_rows = rows;
			_table = new Row[rows];
			for (int i = 0; i < _rows; i++)
			{
				_table[i] = Row(columns);
			}
		}
		else
		{
			_rows = 0;
			_table = nullptr;
		}		
	};
	Table& operator=(const Table& other);
	Table(const Table& other);


	Row &operator[](int index)
	{
		assert(index >= 0 && index < _rows && "Недопустимый индекс!");
		if (index >= 0 && index < _rows)
		{
			return _table[index];
		}		
	};
	const Row &operator[](int index) const
	{
		assert(index >= 0 && index < _rows && "Недопустимый индекс!");
		if (index >= 0 && index < _rows)
		{
			return _table[index];
		}
	};
	const std::string Size() const
	{
		if (_rows > 0)
		{
			return std::to_string(_rows) + "x" + std::to_string(_table->getColumns());
		}
		else
		{
			return "0x0";
		}		
	}
	~Table()
	{
		if (_table != nullptr)
		{
			for (int i = 0; i < _rows; i++)
			{
				delete[] _table[i].getRow();
				_table[i].setRow(nullptr);
			}
			delete[] _table;
			_table = nullptr;
		}
	};
	
private:
	Row *_table;
	int _rows;

	class Row
	{
	public:
		Row()
		{
			_columns = 0;
			_row = nullptr;			
		};
		Row(std::initializer_list<T> list)
		{
			if (list.size() > 0)
			{
				_columns = list.size();
				_row = new T[list.size()]();
				int i = 0;
				for (auto var : list)
				{
					_row[i++] = var;
				}
			}
			else
			{
				_columns = 0;
				_row = nullptr;
			}
		}
		Row(int columns)
		{
			if (columns > 0)
			{
				_columns = columns;
				_row = new T[columns]();
			}
			else
			{
				_columns = 0;
				_row = nullptr;
			}					
		};
		Row &operator=(Row &&other) noexcept
		{
			if (this != &other)
			{
				delete[] _row;
				_row = other._row;
				_columns = other._columns;
				other._row = nullptr;
				other._columns = 0;
			}
			return *this;
		}
		const T &operator[](int index) const
		{
			assert(index >= 0 && index < _columns && "Недопустимый индекс!");
			if (index >= 0 && index < _columns)
			{
				return _row[index];
			}
		};
		T &operator[](int index)
		{
			assert(index >= 0 && index < _columns && "Недопустимый индекс!");
			if (index >= 0 && index < _columns)
			{
				return _row[index];
			}
		};
		int getColumns()
		{
			return _columns;
		};
		void setColumns(int columns)
		{
			_columns = columns;
		};
		T *getRow()
		{
			return _row;
		};
		void setRow(T* row)
		{
			_row = row;
		}
		~Row()
		{
			if (_row != nullptr)
			{
				delete[] _row;
			}
		}
	private:
		T *_row;
		int _columns;
	};
};


int main()
{
	setlocale(LC_ALL, "Russian");

	Table<double> table1(5, 2);
	std::cout << "Size = " << table1.Size() << '\n';
	table1[4][1] = 15.1;
	std::cout << "table1[4][1] = " << table1[4][1] << "\n\n";

	/*Table<int> t1(2, 3); //Запрещено копировать/присваивать
	Table<int> t2(2, 3);

	t1 = t2;*/

	const Table<int> table2{ {1,2,3}, {4,5,6} };
	std::cout << "Size = " << table2.Size() << '\n';
	std::cout << "table2[1][2] = " << table2[1][2];
}