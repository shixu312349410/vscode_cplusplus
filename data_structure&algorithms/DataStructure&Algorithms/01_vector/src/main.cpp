// /******************************************************************************************
//  * Data Structures in C++
//  * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
//  * Junhui DENG, deng@tsinghua.edu.cn
//  * Computer Science & Technology, Tsinghua University
//  * Copyright (c) 2003-2019. All rights reserved.
//  ******************************************************************************************/
#include<iostream>
using namespace std;
#include"vector/vector.h"
int main(){
   int a[] = {1,2,3,4,5};
   Vector<int> vec(a,3);
   //Vector<int> a;
   cout<<vec.size()<<endl;

}





























// /******************************************************************************************
//  * Test of Vector
//  ******************************************************************************************/
// #include "../include/vector/vector_test.h"

// int testID = 0; //���Ա��

// /******************************************************************************************
//  * ���ԣ����������ģ�˳�򣩲���
//  ******************************************************************************************/
// template <typename T> //Ԫ������
// void TestFind ( Vector<T> & V, int n ) {
//    for ( int i = 0; i < V.size(); i++ ) { //���β���������Ԫ�أ���Ȼ�ɹ�
//       T e =  V[i]; print ( e );
//       Rank r = V.find ( e );
//       if ( r < 0 ) printf ( " : not found until rank V[%d] <> %d", r, e );
//       else printf ( " : found at rank V[%d] = %d", r, V[r] );
//       printf ( "\n" );
//    }
//    for ( int i = 0; i <= V.size(); i++ ) { //���β���ÿ������Ԫ�صľ�ֵ�����ܳɹ�
//       T a = ( 0 < i ) ? V[i - 1] : V[0] - 4;
//       T b = ( i < V.size() ) ? V[i] : V[V.size()-1] + 4;
//       T e =  ( a + b ) / 2; print ( e );
//       Rank r = V.find ( e );
//       if ( r < 0 ) printf ( " : not found until rank V[%d] <> %d", r, e );
//       else printf ( " : found at rank V[%d] = %d", r, V[r] );
//       printf ( "\n" );
//    }
// }

// /******************************************************************************************
//  * ���ԣ����������Ĳ��ң�binSearch��fibSearch��
//  ******************************************************************************************/
// template <typename T> //Ԫ������
// void TestSearch ( Vector<T> & V ) {
//    for ( int i = 0; i < V.size(); i++ ) { //���β���������Ԫ�أ���Ȼ�ɹ�
//       T e =  V[i]; print ( e ); printf(": by ");
//       Rank r = V.search ( e );
//       if ( V[r] == e ) printf ( "found at rank V[%d] = %d", r, V[r] );
//       else printf ( "found at rank V[%d] = %d <> %d\a\a", r, V[r], e );
//       printf ( "\n\n" );
//    }
//    for ( int i = 0; i <= V.size(); i++ ) { //��������Ԫ�صľ�ֵ�����ܳɹ�
//       T a = ( 0 < i ) ? V[i - 1] : V[0] - 4;
//       T b = ( i < V.size() ) ? V[i] : V[V.size()-1] + 4;
//       T e =  ( a + b ) / 2; print ( e ); printf(": by ");
//       Rank r = V.search ( e );
//       printf ( "V[%3d] =", r ); ( r < 0 ) ? print ( "-INF" ) : print ( V[r] ); printf ( "  ~  " );
//       printf ( "V[%3d] =", r + 1 ); ( r + 1 < V.size() ) ? print ( V[r + 1] ) : print ( "+INF" );
//       bool ordered = true;
//       if ( ( r >= 0 ) && ( V[r] > e ) ) ordered = false;
//       if ( ( r + 1 < V.size() ) && ( V[r + 1] <= e ) ) ordered = false;
//       if ( !ordered ) printf ( "\tincorrect search\a\a" );
//       printf ( "\n\n" );
//    }
// }

// /******************************************************************************************
//  * ���ԣ����������Ĳ���
//  ******************************************************************************************/
// template <typename T> //Ԫ������
// void TestOrderedInsertion ( Vector<T> & V, int n ) {
//    while ( n * 2 > V.size() ) {
//       T e = dice ( ( T ) n * 2 );
//       printf ( "Inserting " ); print ( e ); printf ( " by " );
//       V.insert ( V.search ( e ) + 1, e );
//       print ( V );
//    }
// }

// /******************************************************************************************
//  * ��������
//  ******************************************************************************************/
// #define PRINT(x)  { print(x); crc(x); checkOrder(x); }
// template <typename T> //Ԫ������
// void   testVector ( int testSize ) {
//    printf ( "\n  ==== Test %2d. Generate a random vector\n", testID++ );
//    Vector<T> V;
//    for ( int i = 0; i < testSize; i++ ) V.insert ( dice ( i + 1 ), dice ( ( T ) testSize * 3 ) ); //��[0, 3n)��ѡ��n�����������������
//    PRINT ( V );
//    permute ( V );
//    PRINT ( V )
//    printf ( "\n  ==== Test %2d. Lowpass on\n", testID++ ); PRINT ( V );
//    int i = V.size(); while ( 0 < --i ) { V[i-1] *= 7; V[i-1] += V[i]; V[i-1] >>= 3; }    PRINT ( V );
//    printf ( "\n  ==== Test %2d. Increase\n", testID++ ); PRINT ( V );
//    increase ( V ); PRINT ( V );
//    printf ( "\n  ==== Test %2d. FIND in\n", testID++ ); PRINT ( V );
//    TestFind<T> ( V, testSize );
//    printf ( "\n  ==== Test %2d. Sort degenerate intervals each of size 1 in\n", testID++ ); PRINT ( V );
//    for ( int i = 0; i < V.size(); i += V.size() / 5 ) { V.sort ( i, i ); PRINT ( V ); } //element by element
//    printf ( "\n  ==== Test %2d. Sort %d intervals each of size <=%d in\n", testID++, 5 + (V.size() % 5 > 0), V.size() / 5 ); PRINT ( V );
//    for ( int i = 0; i < V.size(); i += V.size() / 5 ) { V.sort ( i, __min ( V.size(), i + V.size() / 5 ) ); PRINT ( V ); printf("[%d , %d)\n", i, __min ( V.size(), i + V.size() / 5 ) ); } //interval by interval
//    printf ( "\n  ==== Test %2d. Sort the entire vector of\n", testID++ ); PRINT ( V );
//    V.sort();   PRINT ( V );
//    printf ( "\n  ==== Test %2d. FIND in\n", testID++ ); PRINT ( V );
//    TestFind<T> ( V, testSize );
//    printf ( "\n  ==== Test %2d. SEARCH in\n", testID++ ); PRINT ( V );
//    TestSearch<T> ( V );
//    printf ( "\n  ==== Test %2d. Unsort interval [%d, %d) in\n", testID++, V.size() / 4, 3 * V.size() / 4 ); PRINT ( V );
//    V.unsort ( V.size() / 4, 3 * V.size() / 4 );   PRINT ( V );
//    printf ( "\n  ==== Test %2d. Unsort interval [%d, %d) in\n", testID++, 0, V.size() ); PRINT ( V );
//    V.unsort();   PRINT ( V );
//    printf ( "\n  ==== Test %2d. Copy interval [%d, %d) from\n", testID++, V.size() / 4, 3 * V.size() / 4 ); PRINT ( V );
//    Vector<T> U ( V, V.size() / 4, 3 * V.size() / 4 );
//    PRINT ( U );
//    printf ( "\n  ==== Test %2d. Copy from\n", testID++ ); PRINT ( V );
//    Vector<T> W ( V );
//    PRINT ( W );
//    printf ( "\n  ==== Test %2d. Clone from\n", testID++ ); PRINT ( U );
//    W = U;
//    PRINT ( W );
//    printf ( "\n  ==== Test %2d. Remove redundancy in unsorted\n", testID++ ); PRINT ( V );
//    printf ( "%d node(s) removed\n", V.deduplicate() );   PRINT ( V );
//    printf ( "\n  ==== Test %2d. Sort interval [%d, %d) in\n", testID++, 0, V.size() ); PRINT ( V );
//    V.sort();   PRINT ( V );
//    printf ( "\n  ==== Test %2d. FIND in\n", testID++ ); PRINT ( V );
//    TestFind<T> ( V, testSize );
//    printf ( "\n  ==== Test %2d. SEARCH & INSERT in\n", testID++ ); PRINT ( V );
//    TestOrderedInsertion<T> ( V, testSize );  PRINT ( V );
//    printf ( "\n  ==== Test %2d. Remove redundancy in sorted\n", testID++ ); PRINT ( V );
//    printf ( "%d node(s) removed\n", V.uniquify() );   PRINT ( V );
// }

// /******************************************************************************************
//  * ��������
//  ******************************************************************************************/
// int main ( int argc, char* argv[] ) {
//    if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
//    srand ( ( unsigned int ) time ( NULL ) ); //�����������
//    testVector<int> ( atoi ( argv[1] ) ); //Ԫ�����Ϳ�������������ѡ��
//    return 0;
// }