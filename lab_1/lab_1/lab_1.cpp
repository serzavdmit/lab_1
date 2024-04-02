#include<iostream>
#include<set>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    set<char> Mnoguna_1;
    set<char> Mnoguna_2;

    cout << "\t\tОперацiя над множинами" << endl << endl;

    cout << "Введiть елементи першої множини:" << endl;
    for (int i = 0; i < 6; i++)
    {
        char element;
        cin >> element;
        Mnoguna_1.insert(element);
    }

    cout << "Введiть елементи другої множини:" << endl;
    for (int i = 0; i < 6; i++)
    {
        char element;
        cin >> element;
        Mnoguna_2.insert(element);
    }

    cout << "Перший масив складається з: ";
    for (auto it = Mnoguna_1.begin(); it != Mnoguna_1.end(); it++)
    {
        cout << *it << "; ";
    }
    cout << endl;

    cout << "Другий масив складається з: ";
    for (auto it = Mnoguna_2.begin(); it != Mnoguna_2.end(); it++)
    {
        cout << *it << "; ";
    }
    cout << endl;

    cout << "\t\tЗробiть вибiр операцiї:" << endl;
    cout << "1) Об'днати натиснiть 1;" << endl;
    cout << "2) Перетин натиснiть 2;" << endl;
    cout << "3) Рiзниця натиснить 3;" << endl;
    cout << "4) Симетрична рiзниця натиснить 4;" << endl;
    cout << "5) Декартiв добуток натиснiть 5;" << endl;

    int a;
    do
    {
        cin >> a;
        switch (a)
        {
        case 1:
        {
            set<char> Union;
            Union.insert(Mnoguna_1.begin(), Mnoguna_1.end());
            Union.insert(Mnoguna_2.begin(), Mnoguna_2.end());

            cout << "Об'єднання множин: ";
            for (auto it = Union.begin(); it != Union.end(); it++)
            {
                cout << *it << "; ";
            }
            cout << endl;
        }
        break;
        case 2:
        {
            set<char> Intersection;
            for (auto it = Mnoguna_1.begin(); it != Mnoguna_1.end(); it++)
            {
                if (Mnoguna_2.find(*it) != Mnoguna_2.end())
                {
                    Intersection.insert(*it);
                }
            }

            cout << "Перетин множин: ";
            for (auto it = Intersection.begin(); it != Intersection.end(); it++)
            {
                cout << *it << "; ";
            }
            cout << endl;
        }
        break;
            break;
        case 3:
        {
            set<char> Difference;
            for (auto it = Mnoguna_1.begin(); it != Mnoguna_1.end(); it++)
            {
                if (Mnoguna_2.find(*it) == Mnoguna_2.end())
                {
                    Difference.insert(*it);
                }
            }

            cout << "Різниця множин: ";
            for (auto it = Difference.begin(); it != Difference.end(); it++)
            {
                cout << *it << "; ";
            }
            cout << endl;
        }
        break;

            break;
        case 4:
        {
            set<char> SymmetricDifference;

            for (auto it = Mnoguna_1.begin(); it != Mnoguna_1.end(); it++)
            {
                if (Mnoguna_2.find(*it) == Mnoguna_2.end())
                {
                    SymmetricDifference.insert(*it);
                }
            }

            for (auto it = Mnoguna_2.begin(); it != Mnoguna_2.end(); it++)
            {
                if (Mnoguna_1.find(*it) == Mnoguna_1.end())
                {
                    SymmetricDifference.insert(*it);
                }
            }

            cout << "Симетрична різниця множин: ";
            for (auto it = SymmetricDifference.begin(); it != SymmetricDifference.end(); it++)
            {
                cout << *it << "; ";
            }
            cout << endl;
        }
        break;

            break;
        case 5:
        {
            cout << "Декартів добуток множин:" << endl;
            for (auto it1 = Mnoguna_1.begin(); it1 != Mnoguna_1.end(); it1++)
            {
                for (auto it2 = Mnoguna_2.begin(); it2 != Mnoguna_2.end(); it2++)
                {
                    cout << "(" << *it1 << ", " << *it2 << ")" << endl;
                }
            }
        }
        break;

            break;
        default:
            cout << "Введiть правильну нумерацiю";
        }
    } while (a < 1 || a > 5);
}
