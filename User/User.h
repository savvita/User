#pragma once
class User
{
private:
	long id;
	std::string fname;
	std::string name;
	int age;

public:
	User();
	User(std::string fname,std::string name, int age, long id);

	//gets
	inline const std::string getFatherName() const
	{
		return this->fname;
	}

	inline const std::string getName() const
	{
		return this->name;
	}

	inline int getAge() const
	{
		return this->age;
	}

	inline long getID() const
	{
		return this->id;
	}

	//sets
	void setFatherName(std::string fname);
	void setName(std::string name);
	void setAge(int age);

	//operator <<
	friend std::ostream& operator<<(std::ostream& out, const User& user);
};

