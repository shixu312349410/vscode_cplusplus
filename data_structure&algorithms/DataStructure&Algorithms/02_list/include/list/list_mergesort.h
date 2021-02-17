// /******************************************************************************************
//  * Data Structures in C++
//  * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
//  * Junhui DENG, deng@tsinghua.edu.cn
//  * Computer Science & Technology, Tsinghua University
//  * Copyright (c) 2003-2019. All rights reserved.
//  ******************************************************************************************/

// #pragma once

// template <typename T> //�б��Ĺ鲢�����㷨������ʼ��λ��p��n��Ԫ������
// void List<T>::mergeSort ( ListNodePosi(T) & p, int n ) { //valid(p) && rank(p) + n <= size
//    /*DSA*///printf ( "\tMERGEsort [%3d]\n", n );
//    if ( n < 2 ) return; //��������Χ���㹻С����ֱ�ӷ��أ�����...
//    int m = n >> 1; //���е�Ϊ��
//    ListNodePosi(T) q = p; for ( int i = 0; i < m; i++ ) q = q->succ; //�����б�
//    mergeSort ( p, m ); mergeSort ( q, n - m ); //��ǰ�������б��ֱ�����
//    merge ( p, m, *this, q, n - m ); //�鲢
// } //ע�⣺�����p��Ȼָ��鲢������ģ��£�����