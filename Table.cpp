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
	if(group.eq
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
	