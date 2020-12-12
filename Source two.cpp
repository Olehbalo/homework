
#include <string>
#include "Header.h"
using namespace std;


void Elections::set_candidate()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> nominee[i].surname;
        cin >> nominee[i].amount_of_votes;
        sum += nominee[i].amount_of_votes;
    }
}
void Elections::get_candidate()
{
    for (int i = 0; i < 5; i++)
    {
        cout << nominee[i].surname << " " << anominee[i].amount_of_votes << " " << nominee[i].amount_of_votes * 100 / sum << endl;;
    }
}
void Elections::winner()
{
    int voice = 0;
    int point;
    for (int i = 0; i < 5; i++)
    {
        if (nominee[i].amount_of_votes > voice)
        {
            voice = nominee[i].amount_of_votes;
            point = i;
        }
    }
 cout << "Winner: " << nominee[point].surname << " " << nominee[point].amount_of_votes << " " << nominee[point].amount_of_votes *100 / sum;
}