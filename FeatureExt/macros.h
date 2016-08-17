#pragma once
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

typedef pcl::PointXYZ CloudItem;//XYZ��ʽ�ĵ��Ƶ�Ԫ
typedef pcl::PointCloud<CloudItem> Cloud;//��XYZA��ʽ�ĵ��Ƶ�Ԫ���ɵĵ�������
typedef Cloud::ConstPtr CloudConstPtr;//ָ����Ƶĳ���ָ��
typedef Cloud::Ptr CloudPtr;//ָ����Ƶ�ָ��,����pcl��PtrΪshared_ptr����

typedef pcl::Normal NormalItem;//������
typedef pcl::PointCloud<NormalItem> NormalCloud;//���������ɵĵ�������
typedef NormalCloud::ConstPtr NormalConstPtr;//ָ���������Ƶĳ���ָ��
typedef NormalCloud::Ptr NormalPtr;//ָ���������Ƶ�ָ��