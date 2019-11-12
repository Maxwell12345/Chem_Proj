#include <iostream>
#include <vector>
#include <string>
#include <cmath>

typedef struct{
	uint32_t charge;
	inline void setCharge(std::string group);
	
	//You can add property instance variables here and then add them into the ifel statement
}group_prop;

inline void group_prop::setCharge(std::string group)
{
	std::string *group_string = (std::string *)malloc(sizeof(std::string) * 18);
	group_string[0] = "1A";
	group_string[1] = "2A";
	group_string[2] = "3B";
	group_string[3] = "4B";
	group_string[4] = "5B";
	group_string[5] = "6B";
	group_string[6] = "7B";
	group_string[7] = "8B";
	group_string[8] = "1B";
	group_string[9] = "2B";
	group_string[10] = "3A";
	group_string[11] = "4A";
	group_string[12] = "5A";
	group_string[13] = "6A";
	group_string[14] = "7A";
	group_string[15] = "8A";
	
	if(group.compare("
}

template <typename T>
class element
{
public:
	element(std::string elemental_name, T weight, unsigned charge, bool);
	
	inline void updateCharge(element **prev_elements);
	inline void setIdx(uint32_t idx)
	{
		this->idx = idx;
	}
	inline uint32_t getIdx(void)
	{
		return this->idx;
	}
	
private:
	//Private instance variables
	T atomic_weight;
	std::string id;
	std::string group;
	bool isFixatedCharge;
	
protected:
	//The index of the elementa in a chemical(molecule)
	uint32_t idx;
}

template <typename T> element::element(std::string ele_name, std::string gorup, T weight, bool fixated)
{
	this->atomic_weight = atomic_weight;
	this->id = ele_name;
	this->isFixatedCharge = fixated;
	this->group = group;
}	

template <typename T> inline void element::updateCharge(element **prev)
{
	
}

////////////////////////////////////////
/////// Element Initializations ////////
////////////////////////////////////////

namespace Element{
	static element *N = new element("Nitrogen", "6A", 
	
}
	
