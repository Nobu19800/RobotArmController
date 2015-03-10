#ifndef ControlJoint_H
#define ControlJoint_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <mraa.h>

#include "RobotArm.h"





class ControlJoint
{
public:
	ControlJoint(char address,int channel, RobotArm *ra);
	~ControlJoint();
	bool updateJointPos();
	
	
	
	void setUpperJointLimit(double *jpos);
	void setLowerJointLimit(double *jpos);
	double softUpperLimitJoint[4];
	double softLowerLimitJoint[4];
	
	double jointOffset[4];
	RobotArm *m_ra;

	mraa_i2c_context i2c;
	
};





#endif