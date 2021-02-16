/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //有序向量（区间）的归并
void Vector<T>::merge ( Rank lo, Rank mi, Rank hi ) { //[lo, mi)和[mi, hi)各自有序，lo < mi < hi
   T* A = _elem + lo;//合并后的有序向量A[0, hi - lo) = _elem[lo, hi)，就地
   int lb = mi - lo; T* B = new T[lb]; //前子向量B[0, lb) <-- _elem[lo, mi)
   for ( Rank i = 0; i < lb; i++ ) B[i] = A[i]; //复制自A的前缀
   int lc = hi - mi; T* C = _elem + mi; //后子向量C[0, lc) = _elem[mi, hi)，就地
   for ( Rank i = 0, j = 0, k = 0; j < lb; ) 
      A[i++] = ( lc <= k || B[j] <= C[k] ) ? B[j++] : C[k++];  //将B[j]和c[k]中的小者续至末尾
   delete [] B; //释放临时空间
}//归并后得到完整的有序向量[lo,hi)
