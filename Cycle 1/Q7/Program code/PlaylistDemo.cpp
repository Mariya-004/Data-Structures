#include "Playlist.cpp"
int main() {
    Playlist playlist;
    cout<<"Enter 1 to Create Playlist"<<endl;
	cout<<"Enter 2 to Display Playlist"<<endl;
    cout<<"Enter 3 to Sort by Title"<<endl;
    cout<<"Enter 4 to Sort by Artist"<<endl;
    cout<<"Enter 5 to Sort by Duration"<<endl;
    cout<<"Enter 6 to Sort by Genre"<<endl;
    int choice;
    cout<<endl;
    cout<<"Start(y/n)?:";
    char ch;
    cin>>ch;
    cout<<endl;
    while (ch=='y') {
        cout<<"Enter your choice:";
        cin>>choice;
		cout<<endl;
        if (choice==1) {
            playlist.create_pl();
            cout<<endl;
        }
		if (choice==2) {
            cout<<"Playlist:"<<endl;
            playlist.display_pl();
            cout<<endl;
        } 
		if (choice==3) {
            playlist.sort_title();
            cout<<"Playlist sorted by title."<<endl;
            cout<<endl;
        }
		if (choice==4) {
            playlist.sort_artist();
            cout<<"Playlist sorted by artist."<<endl;
            cout<<endl;
        } 
	    if (choice==5) {
            playlist.sort_duration();
            cout<<"Playlist sorted by duration."<<endl;
            cout<<endl;
        }
		if (choice==6) {
            playlist.sort_genre();
            cout<<"Playlist sorted by genre."<<endl;
            cout<<endl;
        } 
        cout<<"Continue(y/n)?:";
        cin>>ch;
        cout<<endl;
    }
	cout<<"Exiting program,Thank you!"<<endl;
}

