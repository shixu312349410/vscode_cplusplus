// /******************************************************************************************
//  * Data Structures in C++
//  * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
//  * Junhui DENG, deng@tsinghua.edu.cn
//  * Computer Science & Technology, Tsinghua University
//  * Copyright (c) 2003-2019. All rights reserved.
//  ******************************************************************************************/

// #pragma once

// template <typename T> //�����б��Ĺ鲢����ǰ�б�����p���n��Ԫ�أ����б�L����q���m��Ԫ�ع鲢
// void List<T>::merge ( ListNodePosi(T) & p, int n, List<T>& L, ListNodePosi(T) q, int m ) {
// // assert:  this.valid(p) && rank(p) + n <= size && this.sorted(p, n)
// //          L.valid(q) && rank(q) + m <= L._size && L.sorted(q, m)
// // ע�⣺�ڹ鲢����֮��ĳ��ϣ��п��� this == L && rank(p) + n = rank(q)
//    ListNodePosi(T) pp = p->pred; //����ǰ����������header�����Ա㷵��ǰ ...
//    while ( 0 < m ) //��q��δ�Ƴ�����֮ǰ
//       if ( ( 0 < n ) && ( p->data <= q->data ) ) //��p������������v(p) <= v(q)����
//          { if ( q == ( p = p->succ ) ) break; n--; } //p����ϲ����б������滻Ϊ��ֱ�Ӻ��
//       else //��p�ѳ����ҽ��v(q) < v(p)����
//          { insertB ( p, L.remove ( ( q = q->succ )->pred ) ); m--; } //��qת����p֮ǰ
//    p = pp->succ; //ȷ���鲢������ģ��£����
// }