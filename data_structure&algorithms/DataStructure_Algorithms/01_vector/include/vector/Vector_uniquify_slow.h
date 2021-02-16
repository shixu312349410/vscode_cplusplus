/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> int Vector<T>::uniquify() { //���������ظ�Ԫ���޳��㷨����Ч�棩
//    int oldSize = _size; int i = 1; //��ǰ�ȶ�Ԫ�ص��ȣ���ʼ����Ԫ��
//    while ( i < _size ) //��ǰ�����һ�ȶԸ�������Ԫ��
//       _elem[i - 1] == _elem[i] ? remove ( i ) : i++; //����ͬ����ɾ�����ߣ�����ת����һԪ��
//    return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
// }