#include <iostream>
#include <string>

using namespace std;

struct movies
{
	string       title;
	int          year;
	string       genre;
	unsigned int duration;
	unsigned int price;
};

void show_movie(const movies& m)
{
	cout << "title:\t\t" << m.title << endl;
	cout << "year:\t\t" << m.year << endl;
	cout << "genre:\t\t" << m.genre << endl;
	cout << "duration:\t" << m.duration << endl;
	cout << "price:\t\t" << m.price << endl;
}

movies expensive(const movies& m1, const movies& m2, const movies& m3)
{
	if (m1.price >= m2.price && m1.price >= m3.price)    return m1;
	else if (m2.price >= m1.price && m2.price >= m3.price)return m2;
	else                                                 return m3;
}

void update_info(movies& m1)
{
	cout << "Выберите, какую информацию о фильме необходимо обновить : " << endl;;

	cout << "1. Название; " << endl;
	cout << "2. Год выхода; " << endl;
	cout << "3. Жанр; " << endl;
	cout << "4. Продолжительность; " << endl;
	cout << "5. Цена за диск. " << endl;
	int n; cin >> n;

	cout << " введите новое значение: ";

	switch (n)
	{
	case 1:  cin >> m1.title; break;
	case 2:  cin >> m1.year; break;
	case 3:  cin >> m1.genre; break;
	case 4:  cin >> m1.duration; break;
	case 5:  cin >> m1.price; break;
	}

	cout << "Информация обновлена." << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");


	movies m1 = { "aaa", 1990, "asd", 1, 2 };
	movies m2 = { "bbb", 1990, "asd", 1, 3 };
	movies m3 = { "ccc", 1990, "asd", 1, 4 };


	show_movie( expensive(m1, m2, m3) );
	


	movies m1 = { "aaa", 1990, "asd", 1, 2 };

	show_movie(m1);
	update_info(m1);
	show_movie(m1);


}

