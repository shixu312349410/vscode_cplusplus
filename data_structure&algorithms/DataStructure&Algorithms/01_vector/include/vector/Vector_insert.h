/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> //��e��Ϊ��ΪrԪ�ز���
// Rank Vector<T>::insert ( Rank r, T const& e ) { //assert: 0 <= r <= size
//    expand(); //���б�Ҫ������
//    for ( int i = _size; i > r; i-- ) _elem[i] = _elem[i-1]; //�Ժ���ǰ�����Ԫ��˳�κ���һ����Ԫ
//    _elem[r] = e; _size++; //������Ԫ�ز���������
//    return r; //������
// }