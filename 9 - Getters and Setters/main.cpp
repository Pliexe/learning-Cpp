#include <iostream>

using namespace std;

// c# classes sexy owo

class Movie
{
private:
    string rating;

public:
    string title;
    string director;

    Movie(string _title, string _director, string _rating)
    {
        title = _title;
        director = _director;
        setRating(_rating);
    }

    void setRating(string _rating)
    {
        if (_rating == "G" || _rating == "PG" || _rating == "PG-13" || _rating == "R" || _rating == "NR")
            rating = _rating;
        else
            rating = "NR";
    }

    string getRating()
    {
        return rating;
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // G, PG, PG-13, R, NR - ratings

    avengers.setRating("ez");

    cout << avengers.getRating();

    return 0;
}
