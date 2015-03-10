// -*-C++-*-
/*!
 * @file  ManipulatorCommonInterface_MiddleLevelSVC_impl.cpp
 * @brief Service implementation code of ManipulatorCommonInterface_MiddleLevel.idl
 *
 */

#include "ManipulatorCommonInterface_MiddleLevelSVC_impl.h"

/*
 * Example implementational code for IDL interface JARA_ARM::ManipulatorCommonInterface_Middle
 */
ManipulatorCommonInterface_MiddleSVC_impl::ManipulatorCommonInterface_MiddleSVC_impl(RobotArm *ra)
{
	m_robotArm = ra;
  // Please add extra constructor code here.
}


ManipulatorCommonInterface_MiddleSVC_impl::~ManipulatorCommonInterface_MiddleSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::closeGripper()
{
	m_robotArm->closeGripper();

	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getBaseOffset(JARA_ARM::HgMatrix offset)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getFeedbackPosCartesian(JARA_ARM::CarPosWithElbow_out pos)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedCartesian(JARA_ARM::CartesianSpeed_out speed)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getMaxSpeedJoint(JARA_ARM::DoubleSeq_out speed)
{
	speed = new JARA_ARM::DoubleSeq;
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeCartesian(CORBA::Double& aclTime)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeJoint(CORBA::Double& aclTime)
{
	JARA_ARM::RETURN_ID result;
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <JARA_ARM::RETURN_ID ManipulatorCommonInterface_MiddleSVC_impl::getMinAccelTimeJoint(CORBA::Double& aclTime)>"
#endif
  return NULL;
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getSoftLimitCartesian(JARA_ARM::LimitValue_out xLimit, JARA_ARM::LimitValue_out yLimit, JARA_ARM::LimitValue_out zLimit)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::moveGripper(JARA_ARM::ULONG angleRatio)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
	m_robotArm->addTargetPos(Vector3d(carPoint.carPos[0][3], carPoint.carPos[1][3], carPoint.carPos[2][3]), -1);
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::moveLinearCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
	Vector3d pos = m_robotArm->calcKinematics();
	m_robotArm->addTargetPos(Vector3d(carPoint.carPos[0][3]+pos(0), carPoint.carPos[1][3]+pos(1), carPoint.carPos[2][3]+pos(2)), -1);
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianAbs(const JARA_ARM::CarPosWithElbow& carPoint)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::movePTPCartesianRel(const JARA_ARM::CarPosWithElbow& carPoint)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointAbs(const JARA_ARM::JointPos& jointPoints)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::movePTPJointRel(const JARA_ARM::JointPos& jointPoints)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::openGripper()
{
	m_robotArm->openGripper();
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::pause()
{
	m_robotArm->pause();
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::resume()
{
	m_robotArm->resume();
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::stop()
{
	m_robotArm->stop();
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeCartesian(CORBA::Double aclTime)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setAccelTimeJoint(CORBA::Double aclTime)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setBaseOffset(const JARA_ARM::HgMatrix offset)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setControlPointOffset(const JARA_ARM::HgMatrix offset)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedCartesian(const JARA_ARM::CartesianSpeed& speed)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setMaxSpeedJoint(const JARA_ARM::DoubleSeq& speed)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeCartesian(CORBA::Double aclTime)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setMinAccelTimeJoint(CORBA::Double aclTime)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setSoftLimitCartesian(const JARA_ARM::LimitValue& xLimit, const JARA_ARM::LimitValue& yLimit, const JARA_ARM::LimitValue& zLimit)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setSpeedCartesian(JARA_ARM::ULONG spdRatio)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setSpeedJoint(JARA_ARM::ULONG spdRatio)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianAbs(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::moveCircularCartesianRel(const JARA_ARM::CarPosWithElbow& carPointR, const JARA_ARM::CarPosWithElbow& carPointT)
{
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::setHome(const JARA_ARM::JointPos& jointPoint)
{
	if(jointPoint.length() > 2)
	{
		double jpos[3] = {jointPoint[0], jointPoint[1], jointPoint[2]};
		m_robotArm->setHomePosition(jpos);
	}

	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::getHome(JARA_ARM::JointPos_out jointPoint)
{
	jointPoint = new JARA_ARM::JointPos;
	(*jointPoint).length(m_robotArm->axisNum);
	for(int i=0;i < m_robotArm->axisNum;i++)
		(*jointPoint)[i] = m_robotArm->homePosition(i);
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}

JARA_ARM::RETURN_ID *ManipulatorCommonInterface_MiddleSVC_impl::goHome()
{
	m_robotArm->goHomePosition();
	JARA_ARM::RETURN_ID_var result = new JARA_ARM::RETURN_ID();
	return result._retn();
}



// End of example implementational code



