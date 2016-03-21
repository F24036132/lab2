#include <string>
#include <cstdlib>
using namespace std;

class BMI{
	public:
		void setHeight(int tall);
		int getHeight();
		void setMass(int weight);
		int getMass();
		float index();
		string category(float bmi);
	private:
		int height,mass,value;
};
