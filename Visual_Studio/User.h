#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

using namespace std;
//ID, a name, age, gender and a play list (list of music track ids).
class User
{
private:
	int			id;
	string		name;
	int			age;
	char		gender;
	vector<int>	playList;
public:
	User();
	User(int id, string name, int age, char gender);

	int			getId();
	void		setId(int id);
	string		getName();
	void		setName(string name);
	int			getAge();
	void		setAge(int age);
	char		getGender();
	void		setGender(char gender);
	vector<int>	getPlayList();
	void		clearPlayList();
	void		addToPlayList(int musicId);
	void		removeFromPlayList(int musicId);

};

#endif