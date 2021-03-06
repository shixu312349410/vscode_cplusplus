/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> //��㹹���㷨��ͨ������Ԫ��λ�ù�������[lo, hi)����㣬����������
// Rank Vector<T>::partition ( Rank lo, Rank hi ) { //�汾C
//    swap ( _elem[lo], _elem[ lo + rand() % ( hi - lo ) ] ); //��ѡһ��Ԫ������Ԫ�ؽ���
//    T pivot = _elem[lo]; //����Ԫ��Ϊ��ѡ��㡪�������Ͻ�������Ч�����ѡȡ
//    int mi = lo;
//    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//    //   ---- L < [lo] ----- ] ----- [lo] <= G --- ] [ ----- Unknown -------
//    // X x . . . . . . . . . x . . . . . . . . . . . x . . . . . . . . . . x X
//    // |                     |                       |                       |
//    // lo (pivot candidate)  mi                      k                       hi
//    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//    for ( int k = lo + 1; k < hi; k++ ) //��������ɨ��
//       if ( _elem[k] < pivot ) //����ǰԪ��_elem[k]С��pivot����
//          swap ( _elem[++mi], _elem[k] ); //��_elem[k]������ԭmi֮��ʹL������������չ
//    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//    //   --------- L < [lo] ---------- ] ------------- [lo] <= G ----------]
//    // X x . . . . . . . . . . . . . . x . . . . . . . . . . . . . . . . . x X
//    // |                               |                                     |
//    // lo (pivot candidate)            mi                                    hi
//    //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//    swap ( _elem[lo], _elem[mi] ); //��ѡ����λ
//    return mi; //����������
// }