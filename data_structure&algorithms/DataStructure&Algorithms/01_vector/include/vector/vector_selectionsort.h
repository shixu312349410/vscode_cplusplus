/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> //����ѡ������
// void Vector<T>::selectionSort ( Rank lo, Rank hi ) { //0 <= lo < hi <= size
//    /*DSA*/printf ( "\tSELECTIONsort [%3d, %3d)\n", lo, hi );
//    while ( lo < --hi )
//       swap ( _elem[max ( lo, hi ) ], _elem[hi] ); //��[hi]��[lo, hi]�е�����߽���
// }

// template <typename T>
// Rank Vector<T>::max ( Rank lo, Rank hi ) { //��[lo, hi]���ҳ������
//    Rank mx = hi;
//    while ( lo < hi-- ) //����ɨ��
//       if ( _elem[hi] > _elem[mx] ) //���ϸ�Ƚ�
//          mx = hi; //������max�ж��ʱ��֤�������ȣ�������֤selectionSort�ȶ�
//    return mx;
// }
