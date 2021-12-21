#pragma once
class User
{
private:
	int age;
	std::string fname;
	std::string name;

public:
	User();
	User(std::string fname,std::string name, int age);

	//gets
	inline const std::string getFatherName() const
	{
		return this->fname;
	}

	inline const std::string getName() const
	{
		return this->name;
	}

	inline const int getAge() const
	{
		return this->age;
	}

	//sets
	void setFatherName(std::string fname);
	void setName(std::string name);
	void setAge(int age);
};

