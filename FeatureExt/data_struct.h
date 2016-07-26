#pragma once
#include "macros.h"

struct PlanSegment
{
    uint32_t plane_id;
    pcl::PointIndices points_id;   //��Ƭ�����ĵ�
    NormalItem normal;   //normal x,y,z,curvature
    float min_value; //lamda3
    float distance;  //ƽ�淽��ax+by+cz+d=0;
};
//������ĳƽ��ĵ�
struct PlanePoint
{
    CloudItem point;
    float dis;
};
//�߶�
struct LineSegment
{
    float normal_x;      //ֱ�߲���ax+by+z=0
    float normal_y;
    float distance;
    CloudItem startpt,endpt;    //�߶�����յ�
};