// Including libararies to use in program.

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to store movie data in a linked list.
struct Movienode
{
public:
    // all variables to store movie data.
    string movietitle;
    string genres;
    string title_year;
    string imdb_score;
    string director_name;
    string director_facebook_likes;
    string num_critic_for_reviews;
    string duration;
    string actor_1_name;
    string actor_1_facebook_likes;
    string actor_2_name;
    string actor_2_facebook_likes;
    string actor_3_name;
    string actor_3_facebook_likes;
    string gross;
    string num_voted_users, cast_total_facebook_likes;
    string facenumber_in_poster;
    string plot_keywords;
    string movie_imdb_link;
    string num_user_for_reviews;
    string language;
    string country;
    string content_rating;
    string budget;
    string aspect_ratio;
    string movie_facebook_likes;
    string color;

    Movienode *next;

    // making node and storing data.
    Movienode(string movietitle,
              string genres,
              string title_year,
              string imdb_score,
              string director_name,
              string director_facebook_likes,
              string num_critic_for_reviews,
              string duration,
              string actor_1_name,
              string actor_1_facebook_likes,
              string actor_2_name,
              string actor_2_facebook_likes,
              string actor_3_name,
              string actor_3_facebook_likes,
              string gross,
              string num_voted_users,
              string cast_total_facebook_likes,
              string facenumber_in_poster,
              string plot_keywords,
              string movie_imdb_link,
              string num_user_for_reviews,
              string language,
              string country,
              string content_rating,
              string budget,
              string aspect_ratio,
              string movie_facebook_likes,
              string color)
    {
        this->movietitle = movietitle;
        this->genres = genres;
        this->title_year = title_year;
        this->imdb_score = imdb_score;
        this->director_name = director_name;
        this->director_facebook_likes = director_facebook_likes;
        this->num_critic_for_reviews = num_critic_for_reviews;
        this->duration = duration;
        this->actor_1_name = actor_1_name;
        this->actor_1_facebook_likes = actor_1_facebook_likes;
        this->actor_2_name = actor_2_name;
        this->actor_2_facebook_likes = actor_2_facebook_likes;
        this->actor_3_name = actor_3_name;
        this->actor_3_facebook_likes = actor_3_facebook_likes;
        this->gross = gross;
        this->num_voted_users = num_voted_users;
        this->cast_total_facebook_likes = cast_total_facebook_likes;
        this->facenumber_in_poster = facenumber_in_poster;
        this->plot_keywords = plot_keywords;
        this->movie_imdb_link = movie_imdb_link;
        this->num_user_for_reviews = num_user_for_reviews;
        this->language = language;
        this->country = country;
        this->content_rating = content_rating;
        this->budget = budget;
        this->aspect_ratio = aspect_ratio;
        this->movie_facebook_likes = movie_facebook_likes;
        this->color = color;
        next = NULL;
    }
}; // end of structure.

// class movie collection
// We implemented different functions related to movie in this class.

class Moviecollection
{

public:
    // head and tail pointer.
    Movienode *head, *tail;
    Moviecollection()
    {
        head = NULL;
        tail = NULL;
    }

    // adding data to the linkedlist after parsing from csv file.
    void add(string movietitle,
             string genres,
             string title_year,
             string imdb_score,
             string director_name,
             string director_facebook_likes,
             string num_critic_for_reviews,
             string duration,
             string actor_1_name,
             string actor_1_facebook_likes,
             string actor_2_name,
             string actor_2_facebook_likes,
             string actor_3_name,
             string actor_3_facebook_likes,
             string gross,
             string num_voted_users,
             string cast_total_facebook_likes,
             string facenumber_in_poster,
             string plot_keywords,
             string movie_imdb_link,
             string num_user_for_reviews,
             string language,
             string country,
             string content_rating,
             string budget,
             string aspect_ratio,
             string movie_facebook_likes,
             string color)
    {
        Movienode *newnode = new Movienode(movietitle,
                                           genres,
                                           title_year,
                                           imdb_score,
                                           director_name,
                                           director_facebook_likes,
                                           num_critic_for_reviews,
                                           duration,
                                           actor_1_name,
                                           actor_1_facebook_likes,
                                           actor_2_name,
                                           actor_2_facebook_likes,
                                           actor_3_name,
                                           actor_3_facebook_likes,
                                           gross,
                                           num_voted_users,
                                           cast_total_facebook_likes,
                                           facenumber_in_poster,
                                           plot_keywords,
                                           movie_imdb_link,
                                           num_user_for_reviews,
                                           language,
                                           country,
                                           content_rating,
                                           budget,
                                           aspect_ratio,
                                           movie_facebook_likes,
                                           color);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    };

    // function to search movies yearwise.
    void searchByYear()
    {
        bool found = false;
        Movienode *temp;
        temp = head;
        string input;
        cout << "\nEnter the Year: ";
        getline(cin, input);
        while (temp != NULL)
        {
            if (temp->title_year == input)
            {
                cout << "---------------------------------------Movie Data ----------------------------------------" << endl;
                cout << "movie title = " << temp->movietitle << endl;
                cout << "genres = " << temp->genres << endl;
                cout << "title year = " << temp->title_year << endl;
                cout << "imdb score = " << temp->imdb_score << endl;
                cout << "Director = " << temp->director_name << endl;
                cout << "Director Facebook likes = " << temp->director_facebook_likes << endl;
                cout << "Critic Reviews = " << temp->num_critic_for_reviews << endl;
                cout << "Duration = " << temp->duration << endl;
                cout << "Main Actor = " << temp->actor_1_name << endl;
                cout << "Actor likes= " << temp->actor_1_facebook_likes << endl;
                cout << "Co_actor = " << temp->actor_2_name << endl;
                cout << "Co-actor likes = " << temp->actor_2_facebook_likes << endl;
                cout << "Second Co-Actor = " << temp->actor_3_name << endl;
                cout << "Second Co-Actor likes = " << temp->actor_3_facebook_likes << endl;
                cout << "Gross = " << temp->gross << endl;
                cout << "Num of voted user = " << temp->num_voted_users << endl;
                cout << "Cast facebook likes = " << temp->cast_total_facebook_likes << endl;
                cout << endl;
                cout << "-----------------------------------------------------------------------------------------";
                cout << endl;
                found = true;
            }
            temp = temp->next;
        }
        if (found == false)
        {
            cout << "The given movie is not in the database. " << endl;
        }
    }

    // function to search movies by genre.
    void SearchGen()
    {
        bool found = false;
        Movienode *temp;
        temp = head;
        string input;
        cout << "\nEnter the movie genre: ";
        getline(cin, input);
        cout << "\n"
             << endl;
        while (temp != NULL && temp->movietitle != "")
        {
            size_t fnd = temp->genres.find(input);
            if (fnd != string::npos)
            {
                cout << "Director Name: " << temp->director_name << endl;
                cout << "Movie Name: " << temp->movietitle << endl;
                found = true;
                cout << "\n"
                     << endl;
            }
            temp = temp->next;
        }

        if (found == false)
        {
            cout << "The given movie is not in the database. " << endl;
        }
    }

    // function to search movie by movie name in the linkedlist.
    void search()
    {
        bool found = false;
        Movienode *temp;
        temp = head;
        string input;
        cout << "\nEnter the movie name: ";
        getline(cin, input);
        while (temp != NULL)
        {
            if (temp->movietitle == input)
            {
                cout << "---------------------------------------Movie Data ----------------------------------------" << endl;
                cout << "movie title = " << temp->movietitle << endl;
                cout << "genres = " << temp->genres << endl;
                cout << "title year = " << temp->title_year << endl;
                cout << "imdb score = " << temp->imdb_score << endl;
                cout << "Director = " << temp->director_name << endl;
                cout << "Director Facebook likes = " << temp->director_facebook_likes << endl;
                cout << "Critic Reviews = " << temp->num_critic_for_reviews << endl;
                cout << "Duration = " << temp->duration << endl;
                cout << "Main Actor = " << temp->actor_1_name << endl;
                cout << "Actor likes= " << temp->actor_1_facebook_likes << endl;
                cout << "Co_actor = " << temp->actor_2_name << endl;
                cout << "Co-actor likes = " << temp->actor_2_facebook_likes << endl;
                cout << "Second Co-Actor = " << temp->actor_3_name << endl;
                cout << "Second Co-Actor likes = " << temp->actor_3_facebook_likes << endl;
                cout << "Gross = " << temp->gross << endl;
                cout << "Num of voted user = " << temp->num_voted_users << endl;
                cout << "Cast facebook likes = " << temp->cast_total_facebook_likes << endl;
                found = true;
            }
            temp = temp->next;
        }
        if (found == false)
        {
            cout << "The given movie is not in the database. " << endl;
        }
    }

    // function to find and print the coactors of actor.
    void searchCoactorOfActor(string input)
    {
        bool found = false;
        Movienode *temp;
        temp = head;
        while (temp != NULL)
        {
            if (temp->actor_1_name == input)
            {
                cout << "Movie Title: " << temp->movietitle << endl;
                cout << "Actor: " << temp->actor_1_name << endl;
                cout << "Co Actor: " << temp->actor_2_name << endl;
                cout << "Second Co actor: " << temp->actor_3_name << endl;
                found = true;
            }
            temp = temp->next;
        }
        if (found == false)
        {
            cout << "The given actor is not in the database. " << endl;
        }
    }

    // function to display coactors of a actors.
    bool searchbyactor(string input)
    {
        vector<string> coactor;
        bool found = false;
        Movienode *temp;
        temp = head;
        cout << "Now the actor is " << input << endl;
        if (input == "")
        {
            return false;
        }
        while (temp != NULL)
        {
            if (temp->actor_1_name == input)
            {
                cout << "Co Actor of the actor is : " << temp->actor_2_name << endl;
                cout << "Second Co actor of the actor is : " << temp->actor_3_name << endl;
                searchbyactor(temp->actor_2_name);
                searchbyactor(temp->actor_3_name);

                return true;
            }
            temp = temp->next;
        }
        if (found == false)
        {
            cout << "The Actor " << input << " has no co-actor." << endl;
            return false;
        }
        return false;
    }

    map<string, vector<string>> km; // creating hashmap by using inbuilt library for storing movie data yearwise.

    // function to insert data of movies and their release year in a hashmap.
    void Insert(string year, string movie)

    {
        if (year != "")
        {
            vector<string> vx;
            auto it = km.find(year);

            if (it != km.end())
            {

                (*it).second.push_back(movie);
                km.insert({year, (*it).second});
            }

            else
            {
                vx.push_back(movie);
                km.insert({year, vx});
            }
        }
    }

    // function to print movies data yearwise in increasing order.
    void printIncreasingOrder()
    {
        map<string, vector<string>>::iterator it;
        vector<string>::iterator hr;
        for (it = km.begin(); it != km.end(); ++it)
        {

            cout << "Director Name: " << (*it).first << endl;

            cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                 << endl;

            for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
            {
                cout << *hr << "   " << endl;
            }

            cout << "\n"
                 << endl;
        }
    }

    // function to print movies data yearwise in decreasing order.
    void printDecreasingOrder()
    {
        map<string, vector<string>>::reverse_iterator it;
        vector<string>::iterator hr;
        for (it = km.rbegin(); it != km.rend(); ++it)
        {

            cout << "Director Name: " << (*it).first << endl;

            cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                 << endl;

            for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
            {
                cout << *hr << "   " << endl;
            }

            cout << "\n"
                 << endl;
        }
    }

    map<string, vector<string>> rm; // declaring hashmap to store movie name and its rating.

    // inserting movies rating(key) and name(value) in the hashmap.

    void InsertRating(string rating, string movie)
    {
        if (rating != "")
        {
            vector<string> vx;
            auto it = rm.find(rating);

            if (it != rm.end())
            {

                (*it).second.push_back(movie);
                rm.insert({rating, (*it).second});
            }

            else
            {
                vx.push_back(movie);
                rm.insert({rating, vx});
            }
        }
    }

    // print movies data fron the hashmap based on rating.
    void printRatingwise()
    {
        map<string, vector<string>>::reverse_iterator it;
        vector<string>::iterator hr;
        for (it = rm.rbegin(); it != rm.rend(); ++it)
        {

            cout << "Rating: " << (*it).first << endl;

            cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                 << endl;

            for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
            {
                cout << *hr << "   " << endl;
            }

            cout << "\n"
                 << endl;
        }
    }

    // hashmaps to store genre,rating and movie details so that we can print movies based on genre in order of highest rating..
    map<string, map<string, vector<string>>> rrm;

    // function to insert data into the hashmap.

    void InsertMovierating(string genre, string rating, string movie)
    {
        map<string, vector<string>> kjh;
        vector<string> vx;
        auto it2 = rrm.find(genre);
        if (it2 != rrm.end())
        {
            auto it = (*it2).second.find(rating);

            if (it != kjh.end())
            {

                (*it).second.push_back(movie);
                kjh.insert({rating, (*it).second});
            }

            else
            {
                vx.push_back(movie);
                kjh.insert({rating, vx});
            }

            rrm.insert({genre, kjh});
        }

        else
        {
            vx.push_back(movie);
            kjh.insert({rating, vx});

            rrm.insert({genre, kjh});
        }
    }

    // print movie on base on genre from highest rating to lowest rating.
    void printGenre()
    {
        string gen;
        cout << "Enter Genre: ";
        getline(cin, gen);
        map<string, vector<string>>::iterator it;
        vector<string>::iterator hr;

        auto it3 = rrm.find(gen);

        if (it3 != rrm.end())
        {
            cout << "Movie Genre: " << (*it3).first << endl;

            for (it = (*it3).second.begin(); it != (*it3).second.end(); ++it)
            {

                cout << "Rating: " << (*it).first << endl;

                cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                     << endl;

                for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
                {
                    cout << *hr << "   " << endl;
                }

                cout << "\n"
                     << endl;
            }
        }

        else
        {
            cout << "Not Found Such Type of genre" << endl;
        }
    }

    // function returning the  hashmap of the coactor.
    string returnHashmapOfCoActor(string input)
    {

        bool found = false;
        Movienode *temp;
        temp = head;

        while (temp != NULL)
        {
            if (temp->movietitle == input)
            {
                cout << "Movie Title: " << temp->movietitle << endl;
                cout << "Actor: " << temp->actor_1_name << endl;
                cout << "Co Actor: " << temp->actor_2_name << endl;
                cout << "Second Co actor: " << temp->actor_3_name << endl;
                found = true;
            }
            temp = temp->next;
        }
        if (found == false)
        {
            cout << "The given movie is not in the database. " << endl;
        }
        return temp->actor_1_name;
    }
}; // end of class.

// director class.
class DirectorNode
{
private:
    // hashmap to store director name and movies he has directed.
    map<string, vector<string>> g;

public:
    // function to insert data into the hashmap.
    void Insert(string name, string movie)

    {
        vector<string> vx;
        auto it = g.find(name);

        if (it != g.end())
        {

            (*it).second.push_back(movie);
            g.insert({name, (*it).second});
        }

        else
        {
            vx.push_back(movie);
            g.insert({name, vx});
        }
    }

    // function to print the director name and movies he has directed.
    void print()
    {
        map<string, vector<string>>::iterator it;
        vector<string>::iterator hr;
        for (it = g.begin(); it != g.end(); ++it)
        {

            cout << "Director Name: " << (*it).first << endl;

            cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                 << endl;

            for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
            {
                cout << *hr << "   " << endl;
            }

            cout << "\n"
                 << endl;
        }
    }

    // function to search name of director and display all movies which he has directed.
    void Search()
    {

        string sname;
        cout << "\n\nEnter Name of Director to Search: ";
        getline(cin, sname);
        vector<string>::iterator hr;

        auto it = g.find(sname);
        if (it != g.end())
        {

            cout << "\n---------------------------------------Movieslist---------------------------------------\n"
                 << endl;

            for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
            {
                cout << *hr << "   " << endl;
            }

            cout << "\n"
                 << endl;
        }
        else
        {
            cout << "Not Found in the list." << endl;
        }
    }
}; // end of class.

// Actor list class.
class Actorlist
{

public:
    // hashmap to store the data of actors and the movies in which he has acted along with year of release.
    map<string, map<string, vector<string>>> rrm;

    // function to insert actor data into the hashmap.
    void Insert(string actor_name, string movies, string year)

    {
        map<string, vector<string>> kjh;
        vector<string> vx;

        auto it2 = rrm.find(actor_name);
        if (it2 != rrm.end())
        {
            vx.push_back(year);
            (*it2).second.insert({movies, vx});
        }

        else
        {
            vx.push_back(year);
            kjh.insert({movies, vx});

            rrm.insert({actor_name, kjh});
        }
    }

    // function to search for actor in hashmap and display its details.
    void Search()
    {
        string gen;
        cout << "Enter Name: ";
        getline(cin, gen);
        map<string, vector<string>>::iterator it;
        vector<string>::iterator hr;

        auto it3 = rrm.find(gen);

        if (it3 != rrm.end())
        {
            cout << "\nActorName : " << (*it3).first << endl;

            for (it = (*it3).second.begin(); it != (*it3).second.end(); ++it)
            {
                if ((*it).first != "")
                {
                    cout << "Movie: " << (*it).first << endl;
                }
                else
                {
                    continue;
                }

                for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
                {
                    cout << "Year: " << *hr << "   " << endl;
                    break;
                }

                cout << "\n"
                     << endl;
            }
        }

        else
        {
            cout << "Not Such Actor found" << endl;
        }
    }

    // function to retuen movies list of an actor.
    vector<string> returnmovieslist()
    {
        vector<string> movielist;
        string gen;
        cout << "Enter Name: ";
        getline(cin, gen);
        map<string, vector<string>>::iterator it;
        vector<string>::iterator hr;

        auto it3 = rrm.find(gen);

        if (it3 != rrm.end())
        {

            for (it = (*it3).second.begin(); it != (*it3).second.end(); ++it)
            {
                if ((*it).first != "")
                {
                    cout << "Movie: " << (*it).first << endl;
                    movielist.push_back((*it).first);
                }
                else
                {
                    continue;
                }

                for (hr = (*it).second.begin(); hr != (*it).second.end(); ++hr)
                {
                    break;
                }

                cout << "\n"
                     << endl;
            }
        }

        else
        {
            cout << "Not Such Actor found" << endl;
        }
        return movielist;
    }
}; // end of class.

// class movie.

class movie
{
public:
    // all variables to stored parsed data from csv file.

    Moviecollection collection;
    DirectorNode dir;
    Actorlist actor;

    vector<string> movielist2;
    vector<string> coactorVector;
    string coactor;

    string line = "";
    int count = 0;
    string movietitle;
    string genres;
    string title_year;
    string imdb_score;
    string director_name;
    string director_facebook_likes;
    string num_critic_for_reviews;
    string duration;
    string actor_1_name;
    string actor_1_facebook_likes;
    string actor_2_name;
    string actor_2_facebook_likes;
    string actor_3_name;
    string actor_3_facebook_likes;
    string gross;
    string num_voted_users, cast_total_facebook_likes;
    string facenumber_in_poster;
    string plot_keywords;
    string movie_imdb_link;
    string num_user_for_reviews;
    string language;
    string country;
    string content_rating;
    string budget;
    string aspect_ratio;
    string movie_facebook_likes;
    string color;

    // function in which we have implemented a parser and readind data from the csv file.
    void readdata()
    {

        ifstream inputfile;
        inputfile.open("D:\\C++\\Dsa Project\\1.0\\IMDB_Top5000-SEECS.csv"); // location of the csv file should be given here.
        if (inputfile.is_open())
        {

            while (!inputfile.eof())
            {
                if (count == 0)
                {
                    string temp;
                    getline(inputfile, temp);
                    count = 1;
                }
                else
                {
                    getline(inputfile, movietitle, ',');
                    getline(inputfile, genres, ',');
                    getline(inputfile, title_year, ',');
                    getline(inputfile, imdb_score, ',');
                    getline(inputfile, director_name, ',');
                    getline(inputfile, director_facebook_likes, ',');
                    getline(inputfile, num_critic_for_reviews, ',');
                    getline(inputfile, duration, ',');
                    getline(inputfile, actor_1_name, ',');
                    getline(inputfile, actor_1_facebook_likes, ',');
                    getline(inputfile, actor_2_name, ',');
                    getline(inputfile, actor_2_facebook_likes, ',');
                    getline(inputfile, actor_3_name, ',');
                    getline(inputfile, actor_3_facebook_likes, ',');
                    getline(inputfile, gross, ',');
                    getline(inputfile, num_voted_users, ',');
                    getline(inputfile, cast_total_facebook_likes, ',');
                    getline(inputfile, facenumber_in_poster, ',');
                    getline(inputfile, plot_keywords, ',');
                    getline(inputfile, movie_imdb_link, ',');
                    getline(inputfile, num_user_for_reviews, ',');
                    getline(inputfile, language, ',');
                    getline(inputfile, country, ',');
                    getline(inputfile, content_rating, ',');
                    getline(inputfile, budget, ',');
                    getline(inputfile, aspect_ratio, ',');
                    getline(inputfile, movie_facebook_likes, '\n');

                    // inserting data into different functions.

                    collection.add(movietitle, genres, title_year, imdb_score, director_name, director_facebook_likes, num_critic_for_reviews, duration, actor_1_name, actor_1_facebook_likes, actor_2_name, actor_2_facebook_likes, actor_3_name, actor_3_facebook_likes, gross, num_voted_users, cast_total_facebook_likes, facenumber_in_poster, plot_keywords, movie_imdb_link, num_user_for_reviews, language, country, content_rating, budget, aspect_ratio, movie_facebook_likes, color);
                    dir.Insert(director_name, movietitle);
                    collection.Insert(title_year, movietitle);
                    actor.Insert(actor_1_name, movietitle, title_year);
                }
            }
        }
    }

    // calling different function of collection, director and actor list class.

    void searchInMovieCollection()
    {
        collection.search();
    }

    void printDir()
    {
        dir.print();
    }

    void searchDir()
    {
        dir.Search();
    }

    void searchactor()
    {
        actor.Search();
    }
    void returnMovieListAfActor()
    {
        movielist2 = actor.returnmovieslist();
    }

    void SearchProfileOfActor()
    {
        vector<string>::iterator hr;
        cout << "The list of co-actor of : " << endl;
        for (hr = movielist2.begin(); hr != movielist2.end(); ++hr)
        {
            collection.searchCoactorOfActor(*hr);
            cout << endl;
        }
    }
    void SearchProfileOfUniqueActor()
    {
        vector<string>::iterator hr;
        cout << "The list of co-actor of : " << endl;
        for (hr = movielist2.begin(); hr != movielist2.end(); ++hr)
        {
            collection.searchCoactorOfActor(*hr);
            cout << endl;
        }
    }
    void returnHashMapOfCoactor()
    {
        vector<string>::iterator hr;
        for (hr = movielist2.begin(); hr != movielist2.end(); ++hr)
        {
            coactor = collection.returnHashmapOfCoActor(*hr);
            cout << endl;
            coactorVector.push_back(coactor);
        }

        auto ip = unique(coactorVector.begin(), coactorVector.end());

        coactorVector.resize(distance(coactorVector.begin(), ip));

        for (ip = coactorVector.begin(); ip != coactorVector.end(); ++ip)
        {
            cout << *ip << endl;
        }
    }

    void searchCoactorofanActor()
    {
        string actor;
        cout << "\n Enter Actor to find its coactors: ";
        getline(cin, actor);
        collection.searchCoactorOfActor(actor);
    }
    void Searchcoactorofcoactor() {}

    void Gen()
    {
        collection.SearchGen();
    }

    void printYearwise()
    {
        collection.printIncreasingOrder();
    }

    void printYearwise2()
    {
        collection.printDecreasingOrder();
    }

    void searhbyYear()
    {
        collection.searchByYear();
    }

    void printRating()
    {
        collection.printRatingwise();
    }

    void searchCoActorofActor()
    {
        string actor;
        cout << "\n Enter Actor to find its coactors of its coactors: ";
        getline(cin, actor);
        collection.searchbyactor(actor);
    }
}; // end of class.

int main()
{

    // object of movie class to call functions.
    movie moviedata;

    // calling function related to actors, directors, movie form the movie class.
    moviedata.readdata();
    moviedata.searchDir();
    moviedata.Gen();

    moviedata.searchInMovieCollection();
    moviedata.searhbyYear();

    moviedata.printYearwise();
    moviedata.printYearwise2();

    moviedata.Gen();
    moviedata.printRating();

    moviedata.searchactor();

    moviedata.searchCoActorofActor();
}