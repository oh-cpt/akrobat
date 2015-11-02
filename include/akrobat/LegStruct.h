#ifndef LEGSTRUCT_H
#define LEGSTRUCT_H

#include <ros/ros.h>

#include <tf/tf.h>
#include <tf/transform_datatypes.h>

#include <akrobat/FloatJointStruct.h>

struct legStruct
{
	tf::Vector3 footPresPos;            //present position
	tf::Vector3 footInitPos;            //init position
	tf::Vector3 footGlobPos;            //globale position
	tf::Vector3 trajectoryPresPos;      //trajectory present positon
	floatJointStruct jointAngles;	//joint angles
};

#endif // LEGSTRUCT_H