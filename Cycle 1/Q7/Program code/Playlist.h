#include<iostream>
using namespace std;
class Song{
	string title;
	string artist;
	int duration;
	string genre;
	Song* next;
	public:
		Song(string,string,int,string);
		string get_title();
		string get_artist();
		int get_duration();
		string get_genre();
		Song* get_next();
		void set_title(string);
		void set_artist(string);
		void set_duration(int);
		void set_genre(string);
		void set_next(Song* next);
};
class Playlist{
	Song* head;
	public:
		Playlist();
		void create_pl();
		void display_pl();
		void sort_artist();
		void sort_title();
		void sort_duration();
		void sort_genre();
};
