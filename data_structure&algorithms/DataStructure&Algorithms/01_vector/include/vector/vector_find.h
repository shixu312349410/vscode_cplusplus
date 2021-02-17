/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2019. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> 
Rank Vector<T>::find ( T const& e, Rank lo, Rank hi ) const { 
   while ( ( lo < hi-- ) && ( e != _elem[hi] ) ); 
   return hi; 
}