/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

// #pragma once

// template <typename T> void List<T>::reverse() { //ǰ����
//    ListNodePosi(T) p = header; ListNodePosi(T) q = trailer; //ͷ��β�ڵ�
//    for ( int i = 1; i < _size; i += 2 ) //�����ס�ĩ�ڵ㿪ʼ��������ڣ�׽�Ե�
//       swap ( ( p = p->succ )->data, ( q = q->pred )->data ); //�����Գƽڵ��������
// }