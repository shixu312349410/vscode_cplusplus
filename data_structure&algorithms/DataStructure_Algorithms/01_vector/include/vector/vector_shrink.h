/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> void Vector<T>::shrink() { //װ�����ӹ�Сʱѹ��������ռ�ռ�
//    if ( _capacity < DEFAULT_CAPACITY << 1 ) return; //����������DEFAULT_CAPACITY����
//    if ( _size << 2 > _capacity ) return; //��25%Ϊ��
//    T* oldElem = _elem;  _elem = new T[_capacity >>= 1]; //��������
//    for ( int i = 0; i < _size; i++ ) _elem[i] = oldElem[i]; //����ԭ��������
//    delete [] oldElem; //�ͷ�ԭ�ռ�
// }