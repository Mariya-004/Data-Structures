#include"Playlist.h"
Song::Song(string title,string artist,int duration,string genre){
	this->title=title;
	this->artist=artist;
	this->duration=duration;
	this->genre=genre;
	this->next=NULL;
}
string Song:: get_title(){
	return title;
}
string Song:: get_artist(){
	return artist;
}
string Song:: get_genre(){
	return genre;
}
int Song:: get_duration(){
	return duration;
}
Song* Song::get_next(){
	return next;
}
void Song::set_artist(string artist){
	this->artist=artist;
}
void Song::set_title(string title){
	this->title=title;
}
void Song::set_duration(int duration){
	this->duration=duration;
}
void Song::set_genre(string genre){
	this->genre=genre;
}
void Song::set_next(Song* next){
	this->next=next;
}
Playlist::Playlist(){
	head=NULL;
}
void Playlist::create_pl(){
	string option;
	string artist,title,genre;
	float duration;
	Song* current;
	current=head;
	do{
		cout<<"Enter the title of the song:";
		cin>>title;
		cout<<"Enter the artist of song:";
		cin>>artist;
		cout<<"Enter the duration of song:";
		cin>>duration;
		cout<<"Enter the genre of the song:";
		cin>>genre;
		Song* song=new Song(title,artist,duration,genre);
		if(head==NULL){
			head=song;
			current=head;
		}
		else{
			current->set_next(song);
			current=song;
		}
		cout<<endl;
		cout<<"Do you want to enter details(y/n)?:";
		cin>>option;
		cout<<endl;
	}
	while(option=="y");
}
void Playlist::display_pl(){
	Song* s=head;
	while(s!=NULL){
		cout<<"Title:"<<s->get_title()<<endl;
		cout<<"Artist:"<<s->get_artist()<<endl;
		cout<<"Duration"<<s->get_duration()<<endl;
		cout<<"Genre"<<s->get_genre()<<endl;
		s=s->get_next();
		cout<<endl;
	}
	cout<<endl;
}
void Playlist::sort_title(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_title()>q->get_title()){
				string temp=p->get_title();
				p->set_title(q->get_title());
				q->set_title(temp);
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sort_artist(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_artist()>q->get_artist()){
				string temp=p->get_artist();
				p->set_artist(q->get_artist());
				q->set_artist(temp);
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sort_duration(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_duration()>q->get_duration()){
				float temp=p->get_duration();
				p->set_duration(q->get_duration());
				q->set_duration(temp);
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
void Playlist::sort_genre(){
	Song* p=head;
	while(p!=NULL){
		Song* q=p->get_next();
		while(q!=NULL){
			if(p->get_genre()>q->get_genre()){
				string temp=p->get_genre();
				p->set_genre(q->get_genre());
				q->set_genre(temp);
			}
			q=q->get_next();
		}
		p=p->get_next();
	}
}
