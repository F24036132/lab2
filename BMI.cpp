#include "BMI.h"

void BMI::setHeight(int tall){
	height=tall;
}
int BMI::getHeight(){
	return height;
}
void BMI::setMass(int weight){
	mass=weight;
}
int BMI::getMass(){
	return mass;
}
float BMI::index(){
	if(getMass()==0) exit(1);
	value=(getMass()/(getHeight()*getHeight()*0.0001)+0.005)*100;
	return (float)value/100;
}
string BMI::category(float bmi)
{
	if(bmi<15) return "Very severely underweight";
	if(15<=bmi&&bmi<16) return "Severely underweight";
	if(16<=bmi&&bmi<18.5) return "Underweight";
	if(18.5<=bmi&&bmi<25) return "Normal";
	if(25<=bmi&&bmi<30) return "Overweight";
	if(30<=bmi&&bmi<35) return "Obese Class I(Moderately obese)";
	if(35<=bmi&&bmi<40) return "Obese Class II(Severely obese)";
	if(40<=bmi) return "Obese Class III(Very severely obese)";
}
