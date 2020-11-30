
#include <string>
#include "Header.h"
using namespace std;


void Elections::set_candidate()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arre[i].surname;
        cin >> arre[i].amount_of_votes;
        sum += arre[i].amount_of_votes;
    }
}
void Elections::get_candidate()
{
    for (int i = 0; i < 5; i++)
    {
        cout << arre[i].surname << " " << arre[i].amount_of_votes << " " << arre[i].amount_of_votes * 100 / sum << endl;;
    }
}
void Elections::win()
{
    int b = 0;
    int point;
    for (int i = 0; i < 5; i++)
    {
        if (arre[i].amount_of_votes > b)
        {
            b = arre[i].amount_of_votes;
            point = i;
        }
    }
 cout << "Winner: " << arre[point].surname << " " << arre[point].amount_of_votes << " " << arre[point].amount_of_votes *100 / sum;
}