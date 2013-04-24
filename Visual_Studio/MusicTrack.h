#ifndef MUSICTRACK_H
#define MUSICTRACK_H

#include <string>

using namespace std;

enum Genre
{
	Ambient,
	Blues,
	Classical,
	Country,
	Dance,
	Electronic,
	Folk,
	Hip_Hop,
	Jazz,
	Pop,
	R_B,
	Rap,
	Reggae,
	Rock,
	Techno,
	World
};

class MusicTrack
{
private:
	int		id;
	string	title;
	string	artist;
	string	author;
	string	album;
	Genre	genre;
	int		year;
	int		likes;
	int		dislikes;
	int		rating;		//likes - dislikes
public:
	MusicTrack();
	MusicTrack(string title, string artist, string author, string album, Genre genre, int year);

	int		GetId();
	void	MusicTrack::SetId(int id);
	string	GetTitle();
	void	SetTitle(string title);
	string	GetArtist();
	void	SetArtist(string artist);
	string	GetAuthor();
	void	SetAuthor(string author);
	string	GetAlbum();
	void	SetAlbum(string album);
	Genre	GetGenre();
	void	SetGenre(Genre genre);
	int		GetYear();
	void	SetYear(int year);
	int		GetLikes();
	void	SetLikes(int likes);
	void	IncrementLikes();
	int		GetDislikes();
	void	SetDislikes(int dislikes);
	int		GetRating();
	void	UpdateRating();
	void	IncrementDislikes();

	~MusicTrack();
};
#endif