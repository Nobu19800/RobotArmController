#include <unistd.h>
#include "ControlJoint.h"








ControlJoint::ControlJoint(char address,int channel, RobotArm *ra)
{
	m_ra = ra;
	

	
	
	mraa_init();
	
	i2c = mraa_i2c_init(channel);
	mraa_i2c_address(i2c,address);


	softUpperLimitJoint[0] = PI*180/180;
	softUpperLimitJoint[1] = PI*125/180;
	softUpperLimitJoint[2] = PI*105/180;
	softUpperLimitJoint[3] = PI;

	softLowerLimitJoint[0] = 0;
	softLowerLimitJoint[1] = PI*20/180;
	softLowerLimitJoint[2] = PI*15/180;
	softLowerLimitJoint[3] = 0;

	jointOffset[0] = PI*90/180;
	jointOffset[1] = PI*20/180;
	jointOffset[2] = PI*105/180;
	jointOffset[3] = PI/2;

	

	
}

ControlJoint::~ControlJoint()
{
	
	mraa_deinit();
}


bool ControlJoint::updateJointPos()
{
	
	double m[4];
	m[0] = m_ra->theta[0] + jointOffset[0];
	m[1] = m_ra->theta[1] + jointOffset[1];
	m[2] = - m_ra->theta[2] - m_ra->theta[1] + jointOffset[2];
	m[3] = m_ra->theta[3] + jointOffset[3];

	

	for(int i=0;i < 4;i++)
	{
		//std::cout << i << "\t" << m[i] << "\t" << softUpperLimitJoint[i] << "\t" << softLowerLimitJoint[i] << std::endl;
		if(m[i] > softUpperLimitJoint[i])
		{
			return false;
		}
		if(m[i] < softLowerLimitJoint[i])
		{
			return false;
		}

		
	}

	
	uint8_t data[4];

	for(int i=0;i < 4;i++)
	{
		double ang = m[i]*180/PI;
		data[i] = (int)ang;
		
		
	}
	mraa_i2c_write(i2c,data,4);
	return true;
}


void ControlJoint::setUpperJointLimit(double *jpos)
{
	for(int i=0;i < 4;i++)
	{
		softUpperLimitJoint[i] = jpos[i];
	}
	
}

void ControlJoint::setLowerJointLimit(double *jpos)
{
	for(int i=0;i < 4;i++)
	{
		softLowerLimitJoint[i] = jpos[i];
	}

}


